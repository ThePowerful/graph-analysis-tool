#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "html.h"

namespace snu {
  
	void make_html(const char *name, DSResult *result, Plot *plot) {
		char *real_name = (char *)malloc(strlen(name) + 6);
		sprintf(real_name, "%s.html", name);
		FILE *fp = fopen(real_name, "w");
		free(real_name);

		fprintf(fp, "\
		<!DOCTYPE html>\
		<html>\
			<head>\
				<meta charset = \"utf-8\">\
				<title>SNU Graph Analysis Tool</title>\
				<style type=\"text/css\">\
					h2{\
						text-indent: 2em;\
					}\
				</style>\
			</head>\
			<body>\
				<center><h1><p>SNU Graph Analysis Tool</p></h1></center>\
				<h2>\
					(1) Graph information");

			// Graph information
			// fprintf(fp, "...");

			fprintf(fp, "\
				</h2>\
				<h2>\
					(2) Basic statistics");

			// Basic statistics
			//fprintf(fp, "...");


			fprintf(fp, "\
				</h2>\
				<h2>\
					(3) Count statistics");

			// Count Statistics
			//fprintf(fp,"...");

			fprintf(fp, "\
				</h2>\
				<h2>\
					(4) Statistics Image\
				</h2>\
				<h3>\
				<p> label-vertex image </p>\
				<img src=\"matlab_plot/%d_label-vertex.png\" width=\"400\" alt=\"label-vertex image\">\
				<img src=\"matlab_plot/%d_label-vertex_log.png\" width=\"400\" alt=\log scale label-vertex image\">\
				</h3>\
				<h3>\
				<p> indegree image </p>\
				<img src=\"matlab_plot/%d_indegree.png\" width=\"400\" alt=\"indegree image\">\
				<img src=\"matlab_plot/%d_indegree_log.png\" width=\"400\" alt=\"log scale indegree image\">\
				</h3>\
				<h3>\
				<p> outdegree image </p>\
				<img src=\"matlab_plot/%d_outdegree.png\" width=\"400\" alt=\"outdegree image\">\
				<img src=\"matlab_plot/%d_outdegree_log.png\" width=\"400\" alt=\"log scale outdegree image\">\
				</h3>\
			</body>\
		</html>\
		", *plot, *plot, *plot, *plot, *plot, *plot);

		fclose(fp);
	}

	void make_html(const char *name, USResult *result, Plot *plot) {
		char *real_name = (char *)malloc(strlen(name) + 6);
		sprintf(real_name, "%s.html", name);
		FILE *fp = fopen(real_name, "w");
		free(real_name);
		
		fprintf(fp, "\
		<!DOCTYPE html>\
		<html>\
			<head>\
				<meta charset = \"utf-8\">\
				<title>SNU Graph Analysis Tool</title>\
				<style type=\"text/css\">\
					h2{\
						text-indent: 2em;\
					}\
				</style>\
			</head>\
			<body>\
				<center><h1><p>SNU Graph Analysis Tool</p></h1></center>\
				<h2>\
					(1) Graph information");

			// Graph information
			// fprintf(fp, "...");

			fprintf(fp, "\
				</h2>\
				<h2>\
					(2) Basic statistics");

			// Basic statistics
			//fprintf(fp, "...");


			fprintf(fp, "\
				</h2>\
				<h2>\
					(3) Count statistics");

			// Count Statistics
			//fprintf(fp,"...");

			fprintf(fp, "\
				</h2>\
				<h2>\
					(4) Statistics Image\
				</h2>\
				<h3>\
				<p> label-vertex image </p>\
				<img src=\"matlab_plot/%d_label-vertex.png\" width=\"400\" alt=\"label-vertex image\">\
				<img src=\"matlab_plot/%d_label-vertex_log.png\" width=\"400\" alt=\log scale label-vertex image\">\
				</h3>\
				<h3>\
				<p> degree image </p>\
				<img src=\"matlab_plot/%d_degree.png\" width=\"400\" alt=\"degree image\">\
				<img src=\"matlab_plot/%d_degree_log.png\" width=\"400\" alt=\"log scale degree image\">\
				</h3>\
			</body>\
		</html>\
		", *plot, *plot, *plot, *plot);
		
		fclose(fp);
	}
}