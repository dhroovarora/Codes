https://www.hackerrank.com/challenges/querying-the-document/problem?isFullScreen=true






char* kth_word_in_mth_sentence_of_nth_paragraph(char**** document, int k, int m, int n)
{
    return document[n-1][m-1][k-1];
}

char** kth_sentence_in_mth_paragraph(char**** document, int k, int m)
{
    return document[m-1][k-1];
}

char*** kth_paragraph(char**** document, int k)
{
    return document[k-1];
}

char**** get_document(char* text)
{
    int letter_count = 0;
    char**** document = malloc(10000);
    char*** paragraph = malloc(1000);
    char** sentence = malloc(1000);
    char* word = malloc(100);

    for(int l = 0; text[letter_count] != '\0'; l++) // creates a document
    {
        paragraph = malloc(1000);

        for(int k = 0; text[letter_count] != '\n' && text[letter_count] != '\0'; k++) // creates a paragraph
        {
             sentence = malloc(1000);

            for(int j = 0; text[letter_count] != '.'; j++) // creates a sentence
            {
                word = malloc(100);

                for(int i = 0; text[letter_count] != ' ' && text[letter_count] != '.'; i++) // creates a word
                {
                    word[i] = text[letter_count];

                    letter_count++;
                }

                if(text[letter_count] == ' ')
                    letter_count++; // skips a space but not a dot

                sentence[j] = word;
                word = NULL;
            }

            letter_count++; // skips the dot
            paragraph[k] = sentence;
            sentence = NULL;
        }

        if(text[letter_count] == '\n')
            letter_count++; // skips \n but not \0

        document[l] = paragraph;
        paragraph = NULL;
    }

    return document;
}