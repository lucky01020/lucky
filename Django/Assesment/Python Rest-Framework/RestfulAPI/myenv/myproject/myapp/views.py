from django.shortcuts import render
from rest_framework import generics
# Create your views here.
from .models import *
from .serializers import Userserializer


class Userlist(generics.ListCreateAPIView):
    queryset = User.objects.all()
    serializer_class = Userserializer

class Userdetails(generics.RetrieveUpdateDestroyAPIView):
    queryset = User
    serializer_class = Userserializer    
