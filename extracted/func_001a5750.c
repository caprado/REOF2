void func_001a5750() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    at = ((unsigned)a1 < (unsigned)a0) ? 1 : 0;                 // 0x001a5750: sltu $at, $a1, $a0
    if (at == 0) goto label_0x1a57a4;                           // 0x001a5754: beqz $at, 0x1a57a4
    v1 = a1 + a2;                                               // 0x001a575c: addu $v1, $a1, $a2
    at = ((unsigned)a0 < (unsigned)v1) ? 1 : 0;                 // 0x001a5760: sltu $at, $a0, $v1
    if (at == 0) goto label_0x1a57a4;                           // 0x001a5764: beqz $at, 0x1a57a4
    v1 = a2 + -1;                                               // 0x001a5768: addiu $v1, $a2, -1
    a0 = a0 + v1;                                               // 0x001a5770: addu $a0, $a0, $v1
    goto label_0x1a5790;                                        // 0x001a5774: b 0x1a5790
    a1 = a1 + v1;                                               // 0x001a5778: addu $a1, $a1, $v1
label_0x1a577c:
    a3 = a3 + 1;                                                // 0x001a577c: addiu $a3, $a3, 1
    a1 = v1 + -1;                                               // 0x001a5780: addiu $a1, $v1, -1
    v1 = *(int8_t*)(v1);                                        // 0x001a5784: lb $v1, 0($v1)
    *(uint8_t*)(a0) = v1;                                       // 0x001a5788: sb $v1, 0($a0)
    a0 = a0 + -1;                                               // 0x001a578c: addiu $a0, $a0, -1
label_0x1a5790:
    v1 = (a3 < a2) ? 1 : 0;                                     // 0x001a5790: slt $v1, $a3, $a2
    if (v1 != 0) goto label_0x1a577c;                           // 0x001a5794: bnez $v1, 0x1a577c
    goto label_0x1a57cc;                                        // 0x001a579c: b 0x1a57cc
    /* nop */                                                   // 0x001a57a0: nop 
label_0x1a57a4:
    goto label_0x1a57c4;                                        // 0x001a57a4: b 0x1a57c4
    v1 = (a3 < a2) ? 1 : 0;                                     // 0x001a57a8: slt $v1, $a3, $a2
label_0x1a57ac:
    a3 = a3 + 1;                                                // 0x001a57ac: addiu $a3, $a3, 1
    a1 = v1 + 1;                                                // 0x001a57b0: addiu $a1, $v1, 1
    v1 = *(int8_t*)(v1);                                        // 0x001a57b4: lb $v1, 0($v1)
    *(uint8_t*)(a0) = v1;                                       // 0x001a57b8: sb $v1, 0($a0)
    a0 = a0 + 1;                                                // 0x001a57bc: addiu $a0, $a0, 1
    v1 = (a3 < a2) ? 1 : 0;                                     // 0x001a57c0: slt $v1, $a3, $a2
label_0x1a57c4:
    if (v1 != 0) goto label_0x1a57ac;                           // 0x001a57c4: bnez $v1, 0x1a57ac
label_0x1a57cc:
    return;                                                     // 0x001a57cc: jr $ra
    /* nop */                                                   // 0x001a57d0: nop 
}