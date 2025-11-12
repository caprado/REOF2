void func_001d7340() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001d7340: addiu $sp, $sp, -0x20
    a1 = a1 & 0xff;                                             // 0x001d7344: andi $a1, $a1, 0xff
    a2 = 0x3c << 16;                                            // 0x001d734c: lui $a2, 0x3c
    v1 = a1 << 2;                                               // 0x001d7354: sll $v1, $a1, 2
    a3 = *(uint8_t*)((a0) + 3);                                 // 0x001d7358: lbu $a3, 3($a0)
    a2 = a2 + -0xa70;                                           // 0x001d7360: addiu $a2, $a2, -0xa70
    a0 = v1 + a1;                                               // 0x001d7364: addu $a0, $v1, $a1
    v1 = 0x35 << 16;                                            // 0x001d7368: lui $v1, 0x35
    a0 = a0 << 2;                                               // 0x001d736c: sll $a0, $a0, 2
    v1 = v1 + 0x6b00;                                           // 0x001d7370: addiu $v1, $v1, 0x6b00
    v1 = v1 + a0;                                               // 0x001d7374: addu $v1, $v1, $a0
    a0 = a3 << 6;                                               // 0x001d7378: sll $a0, $a3, 6
    a0 = a0 + a3;                                               // 0x001d737c: addu $a0, $a0, $a3
    a0 = a0 << 3;                                               // 0x001d7380: sll $a0, $a0, 3
    a0 = a0 + a3;                                               // 0x001d7384: addu $a0, $a0, $a3
    a0 = a0 << 2;                                               // 0x001d7388: sll $a0, $a0, 2
    a0 = a2 + a0;                                               // 0x001d738c: addu $a0, $a2, $a0
    *(uint8_t*)(a0) = 0;                                        // 0x001d7390: sb $zero, 0($a0)
    v1 = g_00356b0c;  // Global at 0x00356b0c                   // 0x001d7394: lw $v1, 0xc($v1)
    if (v1 == 0) goto label_0x1d745c;                           // 0x001d7398: beqz $v1, 0x1d745c
    /* nop */                                                   // 0x001d739c: nop 
    a0 = 0x15;                                                  // 0x001d73a0: addiu $a0, $zero, 0x15
    func_001aefe0();  // 0x1aefd0                                // 0x001d73a4: jal 0x1aefd0
    a1 = 2;                                                     // 0x001d73a8: addiu $a1, $zero, 2
    a0 = 1;                                                     // 0x001d73ac: addiu $a0, $zero, 1
    func_001aefe0();  // 0x1aefd0                                // 0x001d73b0: jal 0x1aefd0
    a1 = 0x800;                                                 // 0x001d73b4: addiu $a1, $zero, 0x800
    a0 = 0x12;                                                  // 0x001d73b8: addiu $a0, $zero, 0x12
    func_001aefe0();  // 0x1aefd0                                // 0x001d73bc: jal 0x1aefd0
    a1 = 0 | 0x8000;                                            // 0x001d73c0: ori $a1, $zero, 0x8000
    a0 = 0x62;                                                  // 0x001d73c4: addiu $a0, $zero, 0x62
    func_001aefe0();  // 0x1aefd0                                // 0x001d73c8: jal 0x1aefd0
    a1 = 1;                                                     // 0x001d73cc: addiu $a1, $zero, 1
    a0 = 0xc;                                                   // 0x001d73d0: addiu $a0, $zero, 0xc
    func_001aefe0();  // 0x1aefd0                                // 0x001d73d4: jal 0x1aefd0
    a0 = 0x66;                                                  // 0x001d73dc: addiu $a0, $zero, 0x66
    func_001aefe0();  // 0x1aefd0                                // 0x001d73e0: jal 0x1aefd0
    a1 = 1;                                                     // 0x001d73e4: addiu $a1, $zero, 1
    a0 = 2;                                                     // 0x001d73e8: addiu $a0, $zero, 2
    func_001aefe0();  // 0x1aefd0                                // 0x001d73ec: jal 0x1aefd0
    func_001aefe0();  // 0x1aefd0                                // 0x001d73f8: jal 0x1aefd0
    v1 = *(uint8_t*)((s0) + 3);                                 // 0x001d7400: lbu $v1, 3($s0)
    a2 = 0x3c << 16;                                            // 0x001d7404: lui $a2, 0x3c
    a2 = a2 + -0xa70;                                           // 0x001d7408: addiu $a2, $a2, -0xa70
    a1 = 1;                                                     // 0x001d740c: addiu $a1, $zero, 1
    a0 = 0x20;                                                  // 0x001d7410: addiu $a0, $zero, 0x20
    v0 = v1 << 6;                                               // 0x001d7414: sll $v0, $v1, 6
    v0 = v0 + v1;                                               // 0x001d7418: addu $v0, $v0, $v1
    v0 = v0 << 3;                                               // 0x001d741c: sll $v0, $v0, 3
    v0 = v0 + v1;                                               // 0x001d7420: addu $v0, $v0, $v1
    v0 = v0 << 2;                                               // 0x001d7424: sll $v0, $v0, 2
    v0 = a2 + v0;                                               // 0x001d7428: addu $v0, $a2, $v0
    *(uint8_t*)(v0) = a1;                                       // 0x001d742c: sb $a1, 0($v0)
    v1 = *(uint8_t*)((s0) + 3);                                 // 0x001d7430: lbu $v1, 3($s0)
    v0 = v1 << 6;                                               // 0x001d7434: sll $v0, $v1, 6
    v0 = v0 + v1;                                               // 0x001d7438: addu $v0, $v0, $v1
    v0 = v0 << 3;                                               // 0x001d743c: sll $v0, $v0, 3
    v0 = v0 + v1;                                               // 0x001d7440: addu $v0, $v0, $v1
    v0 = v0 << 2;                                               // 0x001d7444: sll $v0, $v0, 2
    v0 = a2 + v0;                                               // 0x001d7448: addu $v0, $a2, $v0
    func_001b28a0();  // 0x1b2780                                // 0x001d744c: jal 0x1b2780
    s0 = v0 + 4;                                                // 0x001d7450: addiu $s0, $v0, 4
    *(uint32_t*)((s0) + 0x808) = v0;                            // 0x001d7454: sw $v0, 0x808($s0)
    *(uint32_t*)((s0) + 0x818) = 0;                             // 0x001d7458: sw $zero, 0x818($s0)
label_0x1d745c:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d7460: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d7464: jr $ra
    sp = sp + 0x20;                                             // 0x001d7468: addiu $sp, $sp, 0x20
}