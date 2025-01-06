from django.shortcuts import render

# Create your views here.



from rest_framework import serializers
from rest_framework import generics
from .models import Book
from .serializers import Bookserializer


class Booklist(generics.ListCreateAPIView):
    queryset = Book.objects.all()
    serializer_class = Bookserializer

class Bookupdate(generics.RetrieveUpdateDestroyAPIView):
    queryset = Book.objects.all()
    serializer_class = Bookserializer