void func_00189098() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x60;                                            // 0x00189098: addiu $sp, $sp, -0x60
    t2 = 0x28 << 16;                                            // 0x0018909c: lui $t2, 0x28
    s0 = t2 + 0x12c0;                                           // 0x001890a8: addiu $s0, $t2, 0x12c0
    g_002812c0 = a0;  // Global at 0x002812c0                   // 0x001890c4: sw $a0, 0x12c0($t2)
    g_002812c4 = a1;  // Global at 0x002812c4                   // 0x001890c8: sw $a1, 4($s0)
    v0 = *(int32_t*)(s1);                                       // 0x001890cc: lw $v0, 0($s1)
    g_002812c8 = v0;  // Global at 0x002812c8                   // 0x001890d0: sw $v0, 8($s0)
    v1 = *(int32_t*)(s2);                                       // 0x001890d4: lw $v1, 0($s2)
    g_002812cc = v1;  // Global at 0x002812cc                   // 0x001890d8: sw $v1, 0xc($s0)
    v0 = *(int32_t*)(s1);                                       // 0x001890dc: lw $v0, 0($s1)
    if (v0 <= 0) goto label_0x189120;                           // 0x001890e0: blez $v0, 0x189120
    a2 = s0 + 0x10;                                             // 0x001890e8: addiu $a2, $s0, 0x10
    t0 = 0x28 << 16;                                            // 0x001890ec: lui $t0, 0x28
    v0 = a3 + a1;                                               // 0x001890f0: addu $v0, $a3, $a1
    /* nop */                                                   // 0x001890f4: nop 
label_0x1890f8:
    a0 = a2 + a1;                                               // 0x001890f8: addu $a0, $a2, $a1
    v1 = *(uint8_t*)(v0);                                       // 0x001890fc: lbu $v1, 0($v0)
    a1 = a1 + 1;                                                // 0x00189100: addiu $a1, $a1, 1
    str_0022a1b0 = v1;  // Global at 0x0022a1b0                 // 0x00189104: sb $v1, 0($a0)
    v0 = *(int32_t*)(s1);                                       // 0x00189108: lw $v0, 0($s1)
    v0 = (a1 < v0) ? 1 : 0;                                     // 0x0018910c: slt $v0, $a1, $v0
    if (v0 != 0) goto label_0x1890f8;                           // 0x00189110: bnez $v0, 0x1890f8
    v0 = a3 + a1;                                               // 0x00189114: addu $v0, $a3, $a1
    goto label_0x189128;                                        // 0x00189118: b 0x189128
    a3 = t2 + 0x12c0;                                           // 0x0018911c: addiu $a3, $t2, 0x12c0
label_0x189120:
    t0 = 0x28 << 16;                                            // 0x00189120: lui $t0, 0x28
    a3 = t2 + 0x12c0;                                           // 0x00189124: addiu $a3, $t2, 0x12c0
label_0x189128:
    a1 = 0x8000 << 16;                                          // 0x00189128: lui $a1, 0x8000
    a0 = t0 + 0x1248;                                           // 0x0018912c: addiu $a0, $t0, 0x1248
    local_0 = 0;                                                // 0x00189130: sw $zero, 0($sp)
    a1 = a1 | 0x1318;                                           // 0x00189134: ori $a1, $a1, 0x1318
    t0 = 0x280;                                                 // 0x0018913c: addiu $t0, $zero, 0x280
    t2 = 0x280;                                                 // 0x00189144: addiu $t2, $zero, 0x280
    func_001178a0();  // 0x1176a8                                // 0x00189148: jal 0x1176a8
    if (v0 >= 0) goto label_0x18916c;                           // 0x00189150: bgezl $v0, 0x18916c
    v0 = g_002816d0;  // Global at 0x002816d0                   // 0x00189154: lw $v0, 0x410($s0)
    a0 = 0x23 << 16;                                            // 0x00189158: lui $a0, 0x23
    func_001896f0();  // 0x1896c8                                // 0x0018915c: jal 0x1896c8
    a0 = &str_0022a1b0;  // "sceDbcSendData: rpc error\n"       // 0x00189160: addiu $a0, $a0, -0x5e50
    goto label_0x1891c4;                                        // 0x00189164: b 0x1891c4
label_0x18916c:
    if (v0 < 0) goto label_0x1891c8;                            // 0x0018916c: bltz $v0, 0x1891c8
    v0 = g_002812c8;  // Global at 0x002812c8                   // 0x00189174: lw $v0, 8($s0)
    *(uint32_t*)(s1) = v0;                                      // 0x00189178: sw $v0, 0($s1)
    v1 = g_002812cc;  // Global at 0x002812cc                   // 0x0018917c: lw $v1, 0xc($s0)
    *(uint32_t*)(s2) = v1;                                      // 0x00189180: sw $v1, 0($s2)
    v0 = g_002812cc;  // Global at 0x002812cc                   // 0x00189184: lw $v0, 0xc($s0)
    if (v0 <= 0) goto label_0x1891c0;                           // 0x00189188: blez $v0, 0x1891c0
    a2 = s0 + 0x210;                                            // 0x00189190: addiu $a2, $s0, 0x210
    v0 = a2 + a1;                                               // 0x00189194: addu $v0, $a2, $a1
label_0x189198:
    a0 = s3 + a1;                                               // 0x00189198: addu $a0, $s3, $a1
    v1 = *(uint8_t*)(v0);                                       // 0x0018919c: lbu $v1, 0($v0)
    a1 = a1 + 1;                                                // 0x001891a0: addiu $a1, $a1, 1
    str_0022a1b0 = v1;  // Global at 0x0022a1b0                 // 0x001891a4: sb $v1, 0($a0)
    v0 = g_002812cc;  // Global at 0x002812cc                   // 0x001891a8: lw $v0, 0xc($s0)
    v0 = (a1 < v0) ? 1 : 0;                                     // 0x001891ac: slt $v0, $a1, $v0
    if (v0 != 0) goto label_0x189198;                           // 0x001891b0: bnez $v0, 0x189198
    v0 = a2 + a1;                                               // 0x001891b4: addu $v0, $a2, $a1
    goto label_0x1891c4;                                        // 0x001891b8: b 0x1891c4
    v0 = g_002816d0;  // Global at 0x002816d0                   // 0x001891bc: lw $v0, 0x410($s0)
label_0x1891c0:
    v0 = g_002816d0;  // Global at 0x002816d0                   // 0x001891c0: lw $v0, 0x410($s0)
label_0x1891c4:
label_0x1891c8:
    return;                                                     // 0x001891d8: jr $ra
    sp = sp + 0x60;                                             // 0x001891dc: addiu $sp, $sp, 0x60
}