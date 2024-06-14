using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Diagnostics.CodeAnalysis;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Proyecto_TPV
{

    public partial class Form2 : Form
    {
        public Form2()
        {
            InitializeComponent();
        }
        double total = 0;

        private void button19_Click(object sender, EventArgs e)
        {
            Form3 CambioF = new Form3();
            CambioF.Show();
            Form2 Esc = new Form2();
            Esc.Hide();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            texto.Text = texto.Text + "-Pastel de chocolate ------ " + "$150" + "                               ";
            total = total + 150;
            textotal.Clear();
            textotal.Text = textotal.Text + "$" + total;

        }

        private void button18_Click(object sender, EventArgs e)
        {
            texto.Clear();
            total = 0;
            textotal.Clear();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            texto.Text = texto.Text + "-Pastel de 3 leches ------ " + "$150" + "                                  ";
            total = total + 150;
            textotal.Clear();
            textotal.Text = textotal.Text + "$" + total;
        }

        private void button3_Click(object sender, EventArgs e)
        {
            texto.Text = texto.Text + "-Pastel de vainilla ------ " + "$150" + "                                    ";
            total = total + 150;
            textotal.Clear();
            textotal.Text = textotal.Text + "$" + total;
        }

        private void button5_Click(object sender, EventArgs e)
        {
            texto.Text = texto.Text + "-Pastel de frutas ------ " + "$150" + "                                     ";
            total = total + 150;
            textotal.Clear();
            textotal.Text = textotal.Text + "$" + total;
        }

        private void button4_Click(object sender, EventArgs e)
        {
            texto.Text = texto.Text + "-Pastel de fresa ------ " + "$150" + "                                         ";
            total = total + 150;
            textotal.Clear();
            textotal.Text = textotal.Text + "$" + total;
        }

        private void textBox12_TextChanged(object sender, EventArgs e)
        {

        }

        private void button11_Click(object sender, EventArgs e)
        {
            texto.Text = texto.Text + "-Tarta de frutas ------ " + "$125" + "                                       ";
            total = total + 125;
            textotal.Clear();
            textotal.Text = textotal.Text + "$" + total;
        }

        private void button10_Click(object sender, EventArgs e)
        {
            texto.Text = texto.Text + "-Tarta de manzana ------ " + "$125" + "                                      ";
            total = total + 125;
            textotal.Clear();
            textotal.Text = textotal.Text + "$" + total;
        }

        private void button6_Click(object sender, EventArgs e)
        {
            texto.Text = texto.Text + "-Pay de limon ------ " + "$100" + "                                      ";
            total = total + 100;
            textotal.Clear();
            textotal.Text = textotal.Text + "$" + total;
        }

        private void button8_Click(object sender, EventArgs e)
        {
            texto.Text = texto.Text + "-Pay de fresa ------ " + "$100" + "                                       ";
            total = total + 100;
            textotal.Clear();
            textotal.Text = textotal.Text + "$" + total;
        }

        private void button9_Click(object sender, EventArgs e)
        {
            texto.Text = texto.Text + "-Pay de queso ------ " + "$150" + "                               ";
            total = total + 100;
            textotal.Clear();
            textotal.Text = textotal.Text + "$" + total;
        }

        private void button7_Click(object sender, EventArgs e)
        {
            texto.Text = texto.Text + "-Pastel de mango ------ " + "$150" + "                               ";
            total = total + 100;
            textotal.Clear();
            textotal.Text = textotal.Text + "$" + total;
        }

        private void button16_Click(object sender, EventArgs e)
        {
            texto.Text = texto.Text + "-Leche ------ " + "$25" + "                               ";
            total = total + 25;
            textotal.Clear();
            textotal.Text = textotal.Text + "$" + total;
        }

        private void button17_Click(object sender, EventArgs e)
        {
            texto.Text = texto.Text + "-Vela ------ " + "$30" + "                               ";
            total = total + 30;
            textotal.Clear();
            textotal.Text = textotal.Text + "$" + total;
        }

        private void button12_Click(object sender, EventArgs e)
        {
            texto.Text = texto.Text + "-Galletas (12pzs) ------ " + "$100" + "                               ";
            total = total + 100;
            textotal.Clear();
            textotal.Text = textotal.Text + "$" + total;
        }

        private void button13_Click(object sender, EventArgs e)
        {
            texto.Text = texto.Text + "-Muffins (6pzs) ------ " + "$50" + "                               ";
            total = total + 50;
            textotal.Clear();
            textotal.Text = textotal.Text + "$" + total;
        }

        private void button14_Click(object sender, EventArgs e)
        {
            texto.Text = texto.Text + "-Cupcake (6pzs) ------ " + "$50" + "                               ";
            total = total + 50;
            textotal.Clear();
            textotal.Text = textotal.Text + "$" + total;
        }

        private void button15_Click(object sender, EventArgs e)
        {
            texto.Text = texto.Text + "-Brownies (6pzs) ------ " + "$50" + "                               ";
            total = total + 50;
            textotal.Clear();
            textotal.Text = textotal.Text + "$" + total;
        }
    }
}


codigo de la segunda pantalla
