#define vm 13
#define am 12
#define vd 11
 
int TempoVm = 6000;
int TempoAm = 3000;
int TempoVd = 6000;



void setup()
{
  pinMode(vm,OUTPUT);
  pinMode(am,OUTPUT);
  pinMode(vd,OUTPUT);
}

void loop()
{
  digitalWrite(vm, HIGH); // liga o led vermelho
  delay(TempoVm); // espera o tempo de x segundos
  digitalWrite(vm, LOW); // desliga o led vermelho
  digitalWrite(vd, HIGH); // liga o led verde
  delay(TempoVd); // espera o tempo de x segundos
  digitalWrite(vd, LOW); // desliga o led vermelho
  digitalWrite(am, HIGH); // liga o led amarelo
  delay(TempoAm); // espera o tempo de x segundos
  digitalWrite(am, LOW); // desliga o led amarelo
   }

