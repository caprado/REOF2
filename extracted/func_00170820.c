void func_00170820() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00170820: addiu $sp, $sp, -0x20
    v0 = 1;                                                     // 0x00170824: addiu $v0, $zero, 1
    *(uint32_t*)((s1) + 0x44) = v0;                             // 0x00170840: sw $v0, 0x44($s1)
    v1 = *(int32_t*)((s1) + 0x54);                              // 0x00170844: lw $v1, 0x54($s1)
    *(uint32_t*)((s1) + 0xc) = 0;                               // 0x00170848: sw $zero, 0xc($s1)
    *(uint32_t*)((s1) + 0x10) = 0;                              // 0x0017084c: sw $zero, 0x10($s1)
    *(uint32_t*)((s1) + 0x14) = 0;                              // 0x00170850: sw $zero, 0x14($s1)
    *(uint32_t*)((s1) + 0x58) = 0;                              // 0x00170854: sw $zero, 0x58($s1)
    if (v1 <= 0) goto label_0x17088c;                           // 0x00170858: blez $v1, 0x17088c
    *(uint32_t*)((s1) + 0x5c) = 0;                              // 0x0017085c: sw $zero, 0x5c($s1)
    v1 = *(int32_t*)((s1) + 0x50);                              // 0x00170860: lw $v1, 0x50($s1)
    a0 = -1;                                                    // 0x00170864: addiu $a0, $zero, -1
label_0x170868:
    g_10000010 = 0;  // Global at 0x10000010                    // 0x00170868: sw $zero, 0x10($v1)
    s2 = s2 + 1;                                                // 0x0017086c: addiu $s2, $s2, 1
    g_10000014 = 0;  // Global at 0x10000014                    // 0x00170870: sw $zero, 0x14($v1)
    v0 = *(int32_t*)((s1) + 0x54);                              // 0x00170878: lw $v0, 0x54($s1)
    v0 = (s2 < v0) ? 1 : 0;                                     // 0x00170880: slt $v0, $s2, $v0
    if (v0 != 0) goto label_0x170868;                           // 0x00170884: bnez $v0, 0x170868
    v1 = v1 + 0x18;                                             // 0x00170888: addiu $v1, $v1, 0x18
label_0x17088c:
    v0 = *(int32_t*)((s1) + 8);                                 // 0x0017088c: lw $v0, 8($s1)
    if (v0 <= 0) goto label_0x1708e0;                           // 0x00170890: blez $v0, 0x1708e0
    s0 = 0xfff << 16;                                           // 0x00170898: lui $s0, 0xfff
    s0 = s0 | 0xffff;                                           // 0x0017089c: ori $s0, $s0, 0xffff
    v0 = *(int32_t*)(s1);                                       // 0x001708a0: lw $v0, 0($s1)
    /* nop */                                                   // 0x001708a4: nop 
    a1 = s2 << 0xb;                                             // 0x001708a8: sll $a1, $s2, 0xb
    v1 = *(int32_t*)((s1) + 4);                                 // 0x001708ac: lw $v1, 4($s1)
    a0 = s2 << 4;                                               // 0x001708b0: sll $a0, $s2, 4
    a1 = a1 + v0;                                               // 0x001708b4: addu $a1, $a1, $v0
    a2 = 3;                                                     // 0x001708b8: addiu $a2, $zero, 3
    a0 = v1 + a0;                                               // 0x001708bc: addu $a0, $v1, $a0
    a1 = a1 & s0;                                               // 0x001708c0: and $a1, $a1, $s0
    a3 = 0x80;                                                  // 0x001708c4: addiu $a3, $zero, 0x80
    func_001707a8();  // 0x170780                                // 0x001708c8: jal 0x170780
    s2 = s2 + 1;                                                // 0x001708cc: addiu $s2, $s2, 1
    v0 = *(int32_t*)((s1) + 8);                                 // 0x001708d0: lw $v0, 8($s1)
    v0 = (s2 < v0) ? 1 : 0;                                     // 0x001708d4: slt $v0, $s2, $v0
    /* bnezl $v0, 0x1708a8 */                                   // 0x001708d8: bnezl $v0, 0x1708a8
    v0 = *(int32_t*)(s1);                                       // 0x001708dc: lw $v0, 0($s1)
label_0x1708e0:
    a1 = *(int32_t*)((s1) + 4);                                 // 0x001708e0: lw $a1, 4($s1)
    s0 = 0xfff << 16;                                           // 0x001708e4: lui $s0, 0xfff
    s0 = s0 | 0xffff;                                           // 0x001708e8: ori $s0, $s0, 0xffff
    a0 = s2 << 4;                                               // 0x001708ec: sll $a0, $s2, 4
    a0 = a1 + a0;                                               // 0x001708f0: addu $a0, $a1, $a0
    a1 = a1 & s0;                                               // 0x001708f4: and $a1, $a1, $s0
    func_001707a8();  // 0x170780                                // 0x001708fc: jal 0x170780
    a2 = 2;                                                     // 0x00170900: addiu $a2, $zero, 2
    a0 = 0x1000 << 16;                                          // 0x00170904: lui $a0, 0x1000
    a2 = *(int32_t*)((s1) + 4);                                 // 0x00170908: lw $a2, 4($s1)
    v1 = 0x1000 << 16;                                          // 0x0017090c: lui $v1, 0x1000
    v0 = *(int32_t*)(s1);                                       // 0x00170910: lw $v0, 0($s1)
    a1 = 0x1000 << 16;                                          // 0x00170914: lui $a1, 0x1000
    a2 = a2 & s0;                                               // 0x00170918: and $a2, $a2, $s0
    v1 = v1 | 0xb410;                                           // 0x0017091c: ori $v1, $v1, 0xb410
    v0 = v0 & s0;                                               // 0x00170920: and $v0, $v0, $s0
    a1 = a1 | 0xb430;                                           // 0x00170924: ori $a1, $a1, 0xb430
    a0 = a0 | 0xb420;                                           // 0x00170928: ori $a0, $a0, 0xb420
    g_10000000 = 0;  // Global at 0x10000000                    // 0x0017092c: sw $zero, 0($a0)
    a0 = 5;                                                     // 0x00170930: addiu $a0, $zero, 5
    g_10000000 = v0;  // Global at 0x10000000                   // 0x00170934: sw $v0, 0($v1)
    func_00170780();  // 0x170718                                // 0x00170938: jal 0x170718
    g_10000000 = a2;  // Global at 0x10000000                   // 0x0017093c: sw $a2, 0($a1)
    v0 = 1;                                                     // 0x00170940: addiu $v0, $zero, 1
    return;                                                     // 0x00170954: jr $ra
    sp = sp + 0x20;                                             // 0x00170958: addiu $sp, $sp, 0x20
}