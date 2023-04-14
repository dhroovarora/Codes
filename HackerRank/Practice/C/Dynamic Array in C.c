https://www.hackerrank.com/challenges/dynamic-array-in-c/problem?isFullScreen=true






int main()
{
    int total_number_of_shelves;
    scanf("%d", &total_number_of_shelves);
    

    int total_number_of_queries;
    scanf("%d", &total_number_of_queries);

    // allocate  total_number_of_books arr  and initialize it to zero   
    total_number_of_books = (int*) calloc(total_number_of_shelves, sizeof(int));
    
    // allocate array of pointers whose size = no.of shelves
    total_number_of_pages = (int**) malloc(total_number_of_shelves * sizeof(int*));
    
    while (total_number_of_queries--) {
        int type_of_query;
        scanf("%d", &type_of_query);
        
        if (type_of_query == 1) {
            /*
             * Process the query of first type here.
             */
            int x, y;
            scanf("%d %d", &x, &y);
            
            // reallocate memory for x position in the array
            total_number_of_pages[x] = (int*) realloc(total_number_of_pages[x],                                                   (total_number_of_books[x]+1) * sizeof(int));
            // update total_number_of_pages 
            total_number_of_pages[x][total_number_of_books[x]] = y;
            
            // increase no.of books
            total_number_of_books[x]++;

        }
    }
}