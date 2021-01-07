void counterspell(Spell *spell)
{
    if (Fireball *s = dynamic_cast<Fireball *>(spell)) 
    {
        s->revealFirepower();
    } 
    else if (Frostbite *s = dynamic_cast<Frostbite *>(spell)) 
    {
        s->revealFrostpower();
    } 
    else if (Thunderstorm *s = dynamic_cast<Thunderstorm *>(spell)) 
    {
        s->revealThunderpower();
    } 
    else if (Waterbolt *s = dynamic_cast<Waterbolt *>(spell)) 
    {
        s->revealWaterpower();
    } 
    else 
    {
        string scroll_name = spell->revealScrollName();
        string journal = SpellJournal::read();
        size_t s_size = scroll_name.size();
        size_t j_size = journal.size();

        if (s_size == 1 && j_size == 1 && scroll_name == journal) 
        {
            cout << 1 << endl;
        } 
        else 
        {
            vector<vector<size_t>> lcs_table(s_size + 1, vector<size_t>(j_size + 1));

            for (size_t i = 1; i <= s_size; ++i) 
            {
                for (size_t j = 1; j <= j_size; ++j) 
                {
                    if (scroll_name[i - 1] == journal[j - 1]) 
                    {
                        lcs_table[i][j] = lcs_table[i - 1][j - 1] + 1;
                    } 
                    else 
                    {
                        lcs_table[i][j] = max(lcs_table[i][j - 1], lcs_table[i - 1][j]);
                    } 
                }
            }
          cout << lcs_table[s_size][j_size] << endl;
        }
    }
}
