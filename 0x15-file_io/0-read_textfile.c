#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	    FILE *r = fopen(filename, "r");
	    int d = (int) letters;
	        int k = (int)letters;
		    char g[1000];
		        int count = 0, f = 0;

			    if (r == NULL) {
				            return 0;
					        } else {
							        while (fgets(g, letters, r) != NULL && f < k) {
									            int len = strlen(g);
										                if (len > d - 1) {
													                len = letters - 1;
															            }
												            fwrite(g, sizeof(char), len, stdout);
													                count += len;
															            f++;
																            }
								    }

			        fclose(r);
				    return count;
}
