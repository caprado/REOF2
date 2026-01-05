void func_001a8450() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001a8450: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001a8458: addu.qb $zero, $sp, $s1
    a0 = 0x23 << 16;                                            // 0x001a8464: lui $a0, 0x23
    func_00108ed8();  // 108ed8                                // 0x001a846c: jal 0x108ed8
    a0 = &str_0022a6f0;  // "Setup DVD file system.\n"          // 0x001a8470: addiu $a0, $a0, -0x5910
    a0 = 0x2a << 16;                                            // 0x001a8474: lui $a0, 0x2a
    a0 = a0 + 0x14f0;                                           // 0x001a847c: addiu $a0, $a0, 0x14f0
    func_00107c70();  // 107c70                                // 0x001a8480: jal 0x107c70
    a2 = 0x10;                                                  // 0x001a8484: addiu $a2, $zero, 0x10
    a0 = 0x2a << 16;                                            // 0x001a8488: lui $a0, 0x2a
    at = 0x2a << 16;                                            // 0x001a848c: lui $at, 0x2a
    a0 = a0 + 0x14f0;                                           // 0x001a8490: addiu $a0, $a0, 0x14f0
    func_00130ff8();  // 130ff8                                // 0x001a8494: jal 0x130ff8
    g_002a14f0 = s1;  // Global at 0x002a14f0                   // 0x001a8498: sw $s1, 0x14f0($at)
    if (s1 == 0) goto label_0x1a84d8;                           // 0x001a849c: beqz $s1, 0x1a84d8
    /* nop */                                                   // 0x001a84a0: nop 
    a0 = 0x2a << 16;                                            // 0x001a84a4: lui $a0, 0x2a
    a0 = a0 + 0x1550;                                           // 0x001a84ac: addiu $a0, $a0, 0x1550
    func_0010ac68();  // 10ac68                                // 0x001a84b0: jal 0x10ac68
    *(uint32_t*)((gp) + -0x63f0) = 0;                           // 0x001a84b4: sw $zero, -0x63f0($gp)
    a0 = 0x2a << 16;                                            // 0x001a84b8: lui $a0, 0x2a
    func_0010ac68();  // 10ac68                                // 0x001a84c0: jal 0x10ac68
    a0 = a0 + 0x13c0;                                           // 0x001a84c4: addiu $a0, $a0, 0x13c0
    a0 = 0x2a << 16;                                            // 0x001a84c8: lui $a0, 0x2a
    func_0010ac68();  // 10ac68                                // 0x001a84d0: jal 0x10ac68
    a0 = a0 + 0x14d0;                                           // 0x001a84d4: addiu $a0, $a0, 0x14d0
label_0x1a84d8:
    at = 0x2a << 16;                                            // 0x001a84d8: lui $at, 0x2a
    v1 = g_002a1650;  // Global at 0x002a1650                   // 0x001a84dc: lb $v1, 0x1650($at)
    if (v1 == 0) goto label_0x1a856c;                           // 0x001a84e0: beqz $v1, 0x1a856c
    a0 = 0x23 << 16;                                            // 0x001a84e4: lui $a0, 0x23
    func_00108ed8();  // 108ed8                                // 0x001a84e8: jal 0x108ed8
    a0 = &str_0022a720;  // "pfs1:\\0flist.dir"                 // 0x001a84ec: addiu $a0, $a0, -0x58e0
    a0 = 0x2a << 16;                                            // 0x001a84f0: lui $a0, 0x2a
    a0 = a0 + 0x1510;                                           // 0x001a84f8: addiu $a0, $a0, 0x1510
    func_00107c70();  // 107c70                                // 0x001a84fc: jal 0x107c70
    a2 = 0x14;                                                  // 0x001a8500: addiu $a2, $zero, 0x14
    v0 = 0x2a << 16;                                            // 0x001a8504: lui $v0, 0x2a
    a0 = 0x2a << 16;                                            // 0x001a8508: lui $a0, 0x2a
    v0 = v0 + 0x1650;                                           // 0x001a850c: addiu $v0, $v0, 0x1650
    at = 0x2a << 16;                                            // 0x001a8510: lui $at, 0x2a
    a0 = a0 + 0x1510;                                           // 0x001a8514: addiu $a0, $a0, 0x1510
    func_00130d48();  // 130d48                                // 0x001a8518: jal 0x130d48
    g_002a1510 = v0;  // Global at 0x002a1510                   // 0x001a851c: sw $v0, 0x1510($at)
    if (s1 != 0) goto label_0x1a856c;                           // 0x001a8520: bnez $s1, 0x1a856c
    /* nop */                                                   // 0x001a8524: nop 
    v0 = 1;                                                     // 0x001a8528: addiu $v0, $zero, 1
    a0 = 0x2a << 16;                                            // 0x001a852c: lui $a0, 0x2a
    a1 = 0x23 << 16;                                            // 0x001a8530: lui $a1, 0x23
    a0 = a0 + 0x14d0;                                           // 0x001a8534: addiu $a0, $a0, 0x14d0
    *(uint32_t*)((gp) + -0x63f0) = v0;                          // 0x001a8538: sw $v0, -0x63f0($gp)
    func_0010ac68();  // 10ac68                                // 0x001a853c: jal 0x10ac68
    a1 = a1 + -0x58c8;                                          // 0x001a8540: addiu $a1, $a1, -0x58c8
    a0 = 0x2a << 16;                                            // 0x001a8544: lui $a0, 0x2a
    a1 = 0x23 << 16;                                            // 0x001a8548: lui $a1, 0x23
    a0 = a0 + 0x14c0;                                           // 0x001a854c: addiu $a0, $a0, 0x14c0
    func_0010ac68();  // 10ac68                                // 0x001a8550: jal 0x10ac68
    a1 = a1 + -0x58c8;                                          // 0x001a8554: addiu $a1, $a1, -0x58c8
    a0 = 0x2a << 16;                                            // 0x001a8558: lui $a0, 0x2a
    a1 = 0x2a << 16;                                            // 0x001a855c: lui $a1, 0x2a
    a0 = a0 + 0x13c0;                                           // 0x001a8560: addiu $a0, $a0, 0x13c0
    func_0010ac68();  // 10ac68                                // 0x001a8564: jal 0x10ac68
    a1 = a1 + 0x1650;                                           // 0x001a8568: addiu $a1, $a1, 0x1650
label_0x1a856c:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001a8570: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001a8574: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001a8578: jr $ra
    sp = sp + 0x30;                                             // 0x001a857c: addiu $sp, $sp, 0x30
}