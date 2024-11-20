#ifndef PPM_H
#define PPM_H
// empecher double import du librairie 'garde'

struct ppm_pixel {
  unsigned char r;
  unsigned char g;
  unsigned char b;
};
//definire une structure 'pixel' r g b

static inline void ppm_setpixel(struct ppm_pixel *px, unsigned char r,
                                unsigned char g, unsigned char b) {
  px->r = r;
  px->g = g;
  px->b = b;
}
//changer la couleur d'un pixel en changent les variables r g b dans la structure

struct ppm_image {
  unsigned int width;
  unsigned int height;
  struct ppm_pixel *px;
};
//definir une structure 'image' ayant une longueur largeur et un tableau de pixel

int ppm_image_init(struct ppm_image *im, int w, int h);//initialise  la strucuture ppm_image
int ppm_image_release(struct ppm_image *im);//supprime/remets à zéro la structure

static inline void ppm_image_setpixel(struct ppm_image *im, int x, int y,
                                      unsigned char r, unsigned char g,
                                      unsigned char b) {
  struct ppm_pixel *px = im->px + im->width * y + x;
  ppm_setpixel(px, r, g, b);
}//changer la couleur des pixels dans une image 

int ppm_image_dump(struct ppm_image *im, char *path);
//créer un fichier image 
#endif /* PPM_H */
