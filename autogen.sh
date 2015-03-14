#!/bin/sh
bs_dir="$(dirname $(readlink -f $0))"

autoreconf -fi "${bs_dir}"

if test -z "$NOCONFIGURE" ; then
	echo 'Configuring...'
	"$bs_dir"/configure "$@"
fi
