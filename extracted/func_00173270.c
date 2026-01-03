void func_00173270() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00173270: addiu $sp, $sp, -0x30
    s0 = *(int32_t*)((s2) + 0x3c);                              // 0x00173298: lw $s0, 0x3c($s2)
    a2 = *(int32_t*)((s2) + 0x40);                              // 0x0017329c: lw $a2, 0x40($s2)
    s0 = s0 + 0x1f;                                             // 0x001732a4: addiu $s0, $s0, 0x1f
    func_00155f90();  // 155f90                                // 0x001732a8: jal 0x155f90
    a2 = (unsigned)a2 >> 2;                                     // 0x001732ac: srl $a2, $a2, 2
    v0 = *(int32_t*)((s2) + 4);                                 // 0x001732b0: lw $v0, 4($s2)
    v1 = -0x20;                                                 // 0x001732b4: addiu $v1, $zero, -0x20
    a0 = s2 & 7;                                                // 0x001732b8: andi $a0, $s2, 7
    v0 = v0 + 0x1f;                                             // 0x001732bc: addiu $v0, $v0, 0x1f
    s1 = s0 & v1;                                               // 0x001732c0: and $s1, $s0, $v1
    v0 = v0 & v1;                                               // 0x001732c4: and $v0, $v0, $v1
    *(uint32_t*)((s2) + 4) = v0;                                // 0x001732cc: sw $v0, 4($s2)
    *(uint32_t*)((s1) + 0x4c) = 0;                              // 0x001732d4: sw $zero, 0x4c($s1)
    if (a0 == 0) goto label_0x173340;                           // 0x001732d8: beqz $a0, 0x173340
    *(uint32_t*)((s1) + 0x48) = 0;                              // 0x001732dc: sw $zero, 0x48($s1)
    a0 = s2 + 0x40;                                             // 0x001732e0: addiu $a0, $s2, 0x40
label_0x1732e4:
    v0 = v0 + 0x20;                                             // 0x00173324: addiu $v0, $v0, 0x20
    /* nop */                                                   // 0x00173328: nop 
    /* nop */                                                   // 0x0017332c: nop 
    if (v0 != a0) goto label_0x1732e4;                          // 0x00173330: bne $v0, $a0, 0x1732e4
    v1 = v1 + 0x20;                                             // 0x00173334: addiu $v1, $v1, 0x20
    goto label_0x173378;                                        // 0x00173338: b 0x173378
    /* nop */                                                   // 0x0017333c: nop 
label_0x173340:
    a0 = s2 + 0x40;                                             // 0x00173340: addiu $a0, $s2, 0x40
label_0x173344:
    v0 = v0 + 0x20;                                             // 0x00173364: addiu $v0, $v0, 0x20
    /* nop */                                                   // 0x00173368: nop 
    /* nop */                                                   // 0x0017336c: nop 
    if (v0 != a0) goto label_0x173344;                          // 0x00173370: bne $v0, $a0, 0x173344
    v1 = v1 + 0x20;                                             // 0x00173374: addiu $v1, $v1, 0x20
label_0x173378:
    a0 = *(int32_t*)(v0);                                       // 0x00173378: lw $a0, 0($v0)
    s3 = 1;                                                     // 0x0017337c: addiu $s3, $zero, 1
    s0 = 0x21 << 16;                                            // 0x00173380: lui $s0, 0x21
    *(uint32_t*)(v1) = a0;                                      // 0x00173384: sw $a0, 0($v1)
    a0 = s1 + 0x78;                                             // 0x00173388: addiu $a0, $s1, 0x78
    *(uint32_t*)((s1) + 0x50) = 0;                              // 0x0017338c: sw $zero, 0x50($s1)
    s0 = s0 + 0x5588;                                           // 0x00173390: addiu $s0, $s0, 0x5588
    *(uint32_t*)((s1) + 0x44) = s3;                             // 0x00173394: sw $s3, 0x44($s1)
    func_00168c20();  // 168c20                                // 0x00173398: jal 0x168c20
    *(uint32_t*)((s1) + 0x54) = 0;                              // 0x0017339c: sw $zero, 0x54($s1)
    func_00173460();  // 173460                                // 0x001733a0: jal 0x173460
    a0 = s1 + 0x90c;                                            // 0x001733a4: addiu $a0, $s1, 0x90c
    func_001734c8();  // 1734c8                                // 0x001733a8: jal 0x1734c8
    a0 = s1 + 0x94c;                                            // 0x001733ac: addiu $a0, $s1, 0x94c
    func_00173520();  // 173520                                // 0x001733b0: jal 0x173520
    a0 = s1 + 0x2ac0;                                           // 0x001733b4: addiu $a0, $s1, 0x2ac0
    func_001698b8();  // 1698b8                                // 0x001733b8: jal 0x1698b8
    a0 = s1 + 0x98c;                                            // 0x001733bc: addiu $a0, $s1, 0x98c
    a0 = s1 + 0x9a0;                                            // 0x001733c0: addiu $a0, $s1, 0x9a0
    func_00155b20();  // 155b20                                // 0x001733c8: jal 0x155b20
    a2 = 0x190;                                                 // 0x001733cc: addiu $a2, $zero, 0x190
    a0 = s1 + 0xb30;                                            // 0x001733d0: addiu $a0, $s1, 0xb30
    a2 = 0x190;                                                 // 0x001733d4: addiu $a2, $zero, 0x190
    func_00155b20();  // 155b20                                // 0x001733d8: jal 0x155b20
    func_00175710();  // 175710                                // 0x001733e4: jal 0x175710
    a1 = s1 + 0xcc0;                                            // 0x001733e8: addiu $a1, $s1, 0xcc0
    a1 = s1 + 0x1140;                                           // 0x001733f0: addiu $a1, $s1, 0x1140
    func_001663e0();  // 1663e0                                // 0x001733f4: jal 0x1663e0
    /* bnezl $v0, 0x17343c */                                   // 0x001733fc: bnezl $v0, 0x17343c
    func_001772a0();  // 1772a0                                // 0x00173410: jal 0x1772a0
    a1 = s1 + 0x1aa0;                                           // 0x00173414: addiu $a1, $s1, 0x1aa0
    func_001741d8();  // 1741d8                                // 0x00173418: jal 0x1741d8
    a0 = s1 + 0x2ab0;                                           // 0x0017341c: addiu $a0, $s1, 0x2ab0
    func_00173650();  // 173650                                // 0x00173420: jal 0x173650
    if (v0 != 0) goto label_0x17343c;                           // 0x00173428: bnez $v0, 0x17343c
    *(uint32_t*)((s1) + 0x48) = s3;                             // 0x00173430: sw $s3, 0x48($s1)
    *(uint32_t*)((s1) + 0x4c) = s3;                             // 0x00173438: sw $s3, 0x4c($s1)
label_0x17343c:
    return;                                                     // 0x00173454: jr $ra
    sp = sp + 0x30;                                             // 0x00173458: addiu $sp, $sp, 0x30
}