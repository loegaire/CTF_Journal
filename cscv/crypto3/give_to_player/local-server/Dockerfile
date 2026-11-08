FROM debian:bookworm-slim

RUN useradd --system --uid 10001 --create-home ctf
COPY --chmod=0755 residuegate-hard /usr/local/bin/residuegate-hard

USER ctf
ENV PORT=5000
EXPOSE 5000
ENTRYPOINT ["/usr/local/bin/residuegate-hard"]
