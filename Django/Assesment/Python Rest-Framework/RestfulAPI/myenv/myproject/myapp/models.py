from django.db import models

# Create your models here.


class User(models.Model):
     
     title = models.CharField(max_length=30)
     content = models.CharField(max_length=30)
     created_at = models.DateTimeField(auto_now_add=True)
     updated_at = models.DateTimeField(auto_now=True)

     def __str__(self):
          return self.title