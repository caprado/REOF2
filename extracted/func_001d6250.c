void func_001d6250() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    t2 = *(int32_t*)((a0) + 0x808);                             // 0x001d6250: lw $t2, 0x808($a0)
    if (t2 != 0) goto label_0x1d6264;                           // 0x001d6254: bnez $t2, 0x1d6264
    goto label_0x1d6300;                                        // 0x001d625c: b 0x1d6300
    /* nop */                                                   // 0x001d6260: nop 
label_0x1d6264:
    t0 = *(uint16_t*)((a0) + 0x812);                            // 0x001d6264: lhu $t0, 0x812($a0)
    if (t0 > 0) goto label_0x1d6278;                            // 0x001d6268: bgtz $t0, 0x1d6278
    goto label_0x1d6300;                                        // 0x001d6270: b 0x1d6300
    /* nop */                                                   // 0x001d6274: nop 
label_0x1d6278:
    a0 = *(int32_t*)((a1) + 0x808);                             // 0x001d6278: lw $a0, 0x808($a1)
    if (a0 != 0) goto label_0x1d628c;                           // 0x001d627c: bnez $a0, 0x1d628c
    goto label_0x1d6300;                                        // 0x001d6284: b 0x1d6300
    /* nop */                                                   // 0x001d6288: nop 
label_0x1d628c:
    a3 = *(uint16_t*)((a1) + 0x812);                            // 0x001d628c: lhu $a3, 0x812($a1)
    if (a3 > 0) goto label_0x1d62a0;                            // 0x001d6290: bgtz $a3, 0x1d62a0
    goto label_0x1d6300;                                        // 0x001d6298: b 0x1d6300
label_0x1d62a0:
    goto label_0x1d62f8;                                        // 0x001d62a0: b 0x1d62f8
    v0 = (a2 < t0) ? 1 : 0;                                     // 0x001d62a4: slt $v0, $a2, $t0
label_0x1d62a8:
    v1 = *(int32_t*)(t2);                                       // 0x001d62a8: lw $v1, 0($t2)
    if (v1 == 0) goto label_0x1d62ec;                           // 0x001d62ac: beqz $v1, 0x1d62ec
    goto label_0x1d62e0;                                        // 0x001d62b4: b 0x1d62e0
label_0x1d62bc:
    v0 = *(int32_t*)(t1);                                       // 0x001d62bc: lw $v0, 0($t1)
    if (v0 == 0) goto label_0x1d62d8;                           // 0x001d62c0: beqz $v0, 0x1d62d8
    /* nop */                                                   // 0x001d62c4: nop 
    if (v1 != v0) goto label_0x1d62d8;                          // 0x001d62c8: bne $v1, $v0, 0x1d62d8
    /* nop */                                                   // 0x001d62cc: nop 
    goto label_0x1d6300;                                        // 0x001d62d0: b 0x1d6300
    v0 = 1;                                                     // 0x001d62d4: addiu $v0, $zero, 1
label_0x1d62d8:
    a1 = a1 + 1;                                                // 0x001d62d8: addiu $a1, $a1, 1
    t1 = t1 + 0x98;                                             // 0x001d62dc: addiu $t1, $t1, 0x98
label_0x1d62e0:
    v0 = (a1 < a3) ? 1 : 0;                                     // 0x001d62e0: slt $v0, $a1, $a3
    if (v0 != 0) goto label_0x1d62bc;                           // 0x001d62e4: bnez $v0, 0x1d62bc
    /* nop */                                                   // 0x001d62e8: nop 
label_0x1d62ec:
    a2 = a2 + 1;                                                // 0x001d62ec: addiu $a2, $a2, 1
    t2 = t2 + 0x98;                                             // 0x001d62f0: addiu $t2, $t2, 0x98
    v0 = (a2 < t0) ? 1 : 0;                                     // 0x001d62f4: slt $v0, $a2, $t0
label_0x1d62f8:
    if (v0 != 0) goto label_0x1d62a8;                           // 0x001d62f8: bnez $v0, 0x1d62a8
label_0x1d6300:
    return;                                                     // 0x001d6300: jr $ra
    /* nop */                                                   // 0x001d6304: nop 
}