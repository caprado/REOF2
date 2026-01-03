void func_001373f8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001373f8: addiu $sp, $sp, -0x30
    goto label_0x137428;                                        // 0x00137418: b 0x137428
    s3 = 0x20 << 16;                                            // 0x0013741c: lui $s3, 0x20
label_0x137420:
    v0 = v0 << 0x10;                                            // 0x00137420: sll $v0, $v0, 0x10
    s0 = v0 >> 0x10;                                            // 0x00137424: sra $s0, $v0, 0x10
label_0x137428:
    v0 = (s0 < 0x3e8) ? 1 : 0;                                  // 0x00137428: slti $v0, $s0, 0x3e8
    /* beqzl $v0, 0x137474 */                                   // 0x0013742c: beqzl $v0, 0x137474
    s2 = *(int8_t*)((s1) + 2);                                  // 0x00137430: lb $s2, 2($s1)
    func_00141390();  // 141390                                // 0x00137434: jal 0x141390
    /* nop */                                                   // 0x00137438: nop 
    a0 = s3 + 0x21c4;                                           // 0x0013743c: addiu $a0, $s3, 0x21c4
    v0 = g_002021c4;  // Global at 0x002021c4                   // 0x00137440: lw $v0, 0($a0)
    v1 = 1;                                                     // 0x00137444: addiu $v1, $zero, 1
    if (v0 != v1) goto label_0x137468;                          // 0x00137448: bne $v0, $v1, 0x137468
    /* nop */                                                   // 0x0013744c: nop 
    func_001413a8();  // 1413a8                                // 0x00137450: jal 0x1413a8
    /* nop */                                                   // 0x00137454: nop 
    func_001372d0();  // 1372d0                                // 0x00137458: jal 0x1372d0
    /* nop */                                                   // 0x0013745c: nop 
    goto label_0x137420;                                        // 0x00137460: b 0x137420
    v0 = s0 + 1;                                                // 0x00137464: addiu $v0, $s0, 1
label_0x137468:
    func_001413a8();  // 1413a8                                // 0x00137468: jal 0x1413a8
    g_002021c4 = v1;  // Global at 0x002021c4                   // 0x0013746c: sw $v1, 0($a0)
    s2 = *(int8_t*)((s1) + 2);                                  // 0x00137470: lb $s2, 2($s1)
    v0 = 2;                                                     // 0x00137474: addiu $v0, $zero, 2
    if (s2 != v0) goto label_0x1374e8;                          // 0x00137478: bnel $s2, $v0, 0x1374e8
    g_002021c4 = 0;  // Global at 0x002021c4                    // 0x0013747c: sw $zero, 0x21c4($s3)
    v0 = 0x20 << 16;                                            // 0x00137480: lui $v0, 0x20
    a0 = 1;                                                     // 0x00137484: addiu $a0, $zero, 1
    s0 = v0 + 0x2188;                                           // 0x00137488: addiu $s0, $v0, 0x2188
    v1 = g_00202189;  // Global at 0x00202189                   // 0x0013748c: lb $v1, 1($s0)
    if (v1 != a0) goto label_0x1374a4;                          // 0x00137490: bne $v1, $a0, 0x1374a4
    v0 = g_00202189;  // Global at 0x00202189                   // 0x00137494: lbu $v0, 1($s0)
    func_00137300();  // 137300                                // 0x00137498: jal 0x137300
    v0 = g_00202189;  // Global at 0x00202189                   // 0x001374a0: lbu $v0, 1($s0)
label_0x1374a4:
    v0 = v0 << 0x18;                                            // 0x001374a4: sll $v0, $v0, 0x18
    v0 = v0 >> 0x18;                                            // 0x001374a8: sra $v0, $v0, 0x18
    if (v0 != s2) goto label_0x1374c0;                          // 0x001374ac: bnel $v0, $s2, 0x1374c0
    v1 = *(int8_t*)((s1) + 2);                                  // 0x001374b0: lb $v1, 2($s1)
    func_00137328();  // 137328                                // 0x001374b4: jal 0x137328
    v1 = *(int8_t*)((s1) + 2);                                  // 0x001374bc: lb $v1, 2($s1)
label_0x1374c0:
    v0 = 9;                                                     // 0x001374c0: addiu $v0, $zero, 9
    if (v1 == v0) goto label_0x1374e4;                          // 0x001374c4: beq $v1, $v0, 0x1374e4
    v0 = 3;                                                     // 0x001374c8: addiu $v0, $zero, 3
    v1 = 0x20 << 16;                                            // 0x001374cc: lui $v1, 0x20
    *(uint8_t*)((s1) + 2) = v0;                                 // 0x001374d0: sb $v0, 2($s1)
    v1 = v1 + 0x21e4;                                           // 0x001374d4: addiu $v1, $v1, 0x21e4
    v0 = g_002021e4;  // Global at 0x002021e4                   // 0x001374d8: lw $v0, 0($v1)
    v0 = v0 + 1;                                                // 0x001374dc: addiu $v0, $v0, 1
    g_002021e4 = v0;  // Global at 0x002021e4                   // 0x001374e0: sw $v0, 0($v1)
label_0x1374e4:
    g_002021c4 = 0;  // Global at 0x002021c4                    // 0x001374e4: sw $zero, 0x21c4($s3)
label_0x1374e8:
    return;                                                     // 0x001374fc: jr $ra
    sp = sp + 0x30;                                             // 0x00137500: addiu $sp, $sp, 0x30
}