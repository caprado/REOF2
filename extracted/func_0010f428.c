void func_0010f428() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a2 = *(int8_t*)(a1);                                        // 0x0010f428: lb $a2, 0($a1)
    v0 = 0x5e;                                                  // 0x0010f42c: addiu $v0, $zero, 0x5e
    if (a2 != v0) goto label_0x10f448;                          // 0x0010f430: bne $a2, $v0, 0x10f448
    a1 = a1 + 1;                                                // 0x0010f434: addiu $a1, $a1, 1
    a2 = *(int8_t*)(a1);                                        // 0x0010f438: lb $a2, 0($a1)
    a1 = a1 + 1;                                                // 0x0010f43c: addiu $a1, $a1, 1
    goto label_0x10f44c;                                        // 0x0010f440: b 0x10f44c
    t0 = 1;                                                     // 0x0010f444: addiu $t0, $zero, 1
label_0x10f448:
label_0x10f44c:
    a3 = 0xff;                                                  // 0x0010f44c: addiu $a3, $zero, 0xff
    v0 = a0 + 0xff;                                             // 0x0010f450: addiu $v0, $a0, 0xff
    /* nop */                                                   // 0x0010f454: nop 
label_0x10f458:
    a3 = a3 + -1;                                               // 0x0010f458: addiu $a3, $a3, -1
    *(uint8_t*)(v0) = t0;                                       // 0x0010f45c: sb $t0, 0($v0)
    /* nop */                                                   // 0x0010f460: nop 
    /* nop */                                                   // 0x0010f464: nop 
    /* nop */                                                   // 0x0010f468: nop 
    if (a3 >= 0) goto label_0x10f458;                           // 0x0010f46c: bgez $a3, 0x10f458
    v0 = v0 + -1;                                               // 0x0010f470: addiu $v0, $v0, -1
    if (a2 == 0) goto label_0x10f520;                           // 0x0010f474: beqz $a2, 0x10f520
    v0 = a1 + -1;                                               // 0x0010f478: addiu $v0, $a1, -1
    v0 = 1;                                                     // 0x0010f47c: addiu $v0, $zero, 1
    t2 = 0x2d;                                                  // 0x0010f480: addiu $t2, $zero, 0x2d
    t0 = v0 - t0;                                               // 0x0010f484: subu $t0, $v0, $t0
    t1 = 0x5d;                                                  // 0x0010f488: addiu $t1, $zero, 0x5d
    /* nop */                                                   // 0x0010f48c: nop 
label_0x10f490:
    v0 = a0 + a2;                                               // 0x0010f490: addu $v0, $a0, $a2
label_0x10f494:
    *(uint8_t*)(v0) = t0;                                       // 0x0010f494: sb $t0, 0($v0)
    a3 = *(int8_t*)(a1);                                        // 0x0010f498: lb $a3, 0($a1)
label_0x10f49c:
    if (a3 == t2) goto label_0x10f4d0;                          // 0x0010f49c: beq $a3, $t2, 0x10f4d0
    a1 = a1 + 1;                                                // 0x0010f4a0: addiu $a1, $a1, 1
    v0 = (a3 < 0x2e) ? 1 : 0;                                   // 0x0010f4a4: slti $v0, $a3, 0x2e
    if (v0 == 0) goto label_0x10f4c0;                           // 0x0010f4a8: beqz $v0, 0x10f4c0
    /* nop */                                                   // 0x0010f4ac: nop 
    if (a3 == 0) goto label_0x10f520;                           // 0x0010f4b0: beqz $a3, 0x10f520
    v0 = a1 + -1;                                               // 0x0010f4b4: addiu $v0, $a1, -1
    goto label_0x10f490;                                        // 0x0010f4b8: b 0x10f490
label_0x10f4c0:
    if (a3 == t1) goto label_0x10f520;                          // 0x0010f4c0: beq $a3, $t1, 0x10f520
    goto label_0x10f518;                                        // 0x0010f4c8: b 0x10f518
label_0x10f4d0:
    a3 = *(int8_t*)(a1);                                        // 0x0010f4d0: lb $a3, 0($a1)
    if (a3 == t1) goto label_0x10f490;                          // 0x0010f4d4: beql $a3, $t1, 0x10f490
    a2 = 0x2d;                                                  // 0x0010f4d8: addiu $a2, $zero, 0x2d
    v0 = (a3 < a2) ? 1 : 0;                                     // 0x0010f4dc: slt $v0, $a3, $a2
    /* beqzl $v0, 0x10f4f0 */                                   // 0x0010f4e0: beqzl $v0, 0x10f4f0
    a1 = a1 + 1;                                                // 0x0010f4e4: addiu $a1, $a1, 1
    goto label_0x10f490;                                        // 0x0010f4e8: b 0x10f490
    a2 = 0x2d;                                                  // 0x0010f4ec: addiu $a2, $zero, 0x2d
label_0x10f4f0:
    a2 = a2 + 1;                                                // 0x0010f4f0: addiu $a2, $a2, 1
    v0 = a0 + a2;                                               // 0x0010f4f4: addu $v0, $a0, $a2
    v1 = (a2 < a3) ? 1 : 0;                                     // 0x0010f4f8: slt $v1, $a2, $a3
    /* nop */                                                   // 0x0010f4fc: nop 
    /* nop */                                                   // 0x0010f500: nop 
    if (v1 != 0) goto label_0x10f4f0;                           // 0x0010f504: bnez $v1, 0x10f4f0
    *(uint8_t*)(v0) = t0;                                       // 0x0010f508: sb $t0, 0($v0)
    goto label_0x10f49c;                                        // 0x0010f50c: b 0x10f49c
    a3 = *(int8_t*)(a1);                                        // 0x0010f510: lb $a3, 0($a1)
    /* nop */                                                   // 0x0010f514: nop 
label_0x10f518:
    goto label_0x10f494;                                        // 0x0010f518: b 0x10f494
    v0 = a0 + a2;                                               // 0x0010f51c: addu $v0, $a0, $a2
label_0x10f520:
    return;                                                     // 0x0010f520: jr $ra
    /* nop */                                                   // 0x0010f524: nop 
}