# Generated by Django 5.1.3 on 2024-12-10 09:13

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('myapp', '0005_rename_cname_car_yname'),
    ]

    operations = [
        migrations.AddField(
            model_name='car',
            name='mileage',
            field=models.IntegerField(default=1),
            preserve_default=False,
        ),
    ]
