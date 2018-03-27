typedef enum colors{
    white,
    yellow,
    orange,
    pink,
    red,
    green,
    blue,
    purple,
    brown,
    black
} cloth_color;
typedef enum types{
  t_shirt,
  shirt,
  trousers,
  skirt,
  dress,
  shoes,
  sweater,
  jacket
} cloth_type;

typedef struct{
  char ref[15];
  char size[5];
  cloth_color color;
  cloth_type type;
  char m_f;
  int n_units;
  float price;
} garment_info;

typedef struct{
  char address[50];
  char phone_number[10];
  char e_mail[50];
} contact_info;

typedef struct{
  int code;
  contact_info contact;
  int n_garments;
  garment_info* ptr_garments;
} store_info;

typedef struct{
  contact_info contact;
  int n_stores;
  store_info* ptr_stores;
} chain_info;
