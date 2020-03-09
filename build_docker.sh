

# docker rm clara_2
# docker build --rm=true -t clara_fmap_replace .
docker cp clara_code/clara/matching.py clara_2:/usr/local/lib/python2.7/dist-packages/clara/matching.py
docker cp clara_code/clara/repair.py clara_2:/usr/local/lib/python2.7/dist-packages/clara/repair.py
docker cp clara_code/clara/feedback_repair.py clara_2:/usr/local/lib/python2.7/dist-packages/clara/feedback_repair.py
docker cp clara_code/bin/clara clara_2:/usr/local/bin/clara

# docker run -ti -h --name clara_2 clara clara_fmap clara match examples/c1.py examples/c2.py --entryfnc computeDeriv --args "[[[4.5]], [[1.0,3.0,5.5]]]" --ignoreio 1
sudo docker exec -it clara_2 clara repair examples/c4.c examples/i4.c  --args "[[]]" --ignoreio 1 --verbose 0 --fnmapping 1
