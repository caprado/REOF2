void func_001c65f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x90;                                            // 0x001c65f0: addiu $sp, $sp, -0x90
    at = 0 | 0x8390;                                            // 0x001c65f4: ori $at, $zero, 0x8390
    a0 = 0x14;                                                  // 0x001c65fc: addiu $a0, $zero, 0x14
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x001c6604: subu.qb $zero, $sp, $s5
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001c660c: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001c6614: addu.qb $zero, $sp, $s1
    s0 = *(int32_t*)((gp) + -0x62dc);                           // 0x001c661c: lw $s0, -0x62dc($gp)
    v0 = *(int32_t*)((s0) + 0xec);                              // 0x001c6620: lw $v0, 0xec($s0)
    s5 = v0 + at;                                               // 0x001c6624: addu $s5, $v0, $at
    func_001b4fd0();  // 1b4fd0                                // 0x001c6628: jal 0x1b4fd0
    s1 = v0 + 0x10;                                             // 0x001c662c: addiu $s1, $v0, 0x10
    v0 = 0x8080 << 16;                                          // 0x001c6630: lui $v0, 0x8080
    func_001b5050();  // 1b5050                                // 0x001c6634: jal 0x1b5050
    a0 = v0 | 0x8080;                                           // 0x001c6638: ori $a0, $v0, 0x8080
    v1 = *(int32_t*)((s0) + 0xd8);                              // 0x001c663c: lw $v1, 0xd8($s0)
    a0 = 0x41;                                                  // 0x001c6640: addiu $a0, $zero, 0x41
    v0 = *(int32_t*)((s0) + 0xd4);                              // 0x001c6644: lw $v0, 0xd4($s0)
    s3 = v1 + 0x78;                                             // 0x001c6648: addiu $s3, $v1, 0x78
    func_001c1980();  // 1c1980                                // 0x001c664c: jal 0x1c1980
    s4 = v0 + 0x28;                                             // 0x001c6650: addiu $s4, $v0, 0x28
    func_001c1d00();  // 1c1d00                                // 0x001c6654: jal 0x1c1d00
    func_001b4ff0();  // 1b4ff0                                // 0x001c6664: jal 0x1b4ff0
    func_001b5090();  // 1b5090                                // 0x001c666c: jal 0x1b5090
    a0 = *(int32_t*)(s0);                                       // 0x001c6670: lw $a0, 0($s0)
    v0 = g_00010015;  // Global at 0x00010015                   // 0x001c6674: lbu $v0, 5($s1)
    v0 = v0 << 2;                                               // 0x001c6678: sll $v0, $v0, 2
    v0 = s2 + v0;                                               // 0x001c667c: addu $v0, $s2, $v0
    func_001b5090();  // 1b5090                                // 0x001c6680: jal 0x1b5090
    a0 = g_80800000;  // Global at 0x80800000                   // 0x001c6684: lw $a0, 0($v0)
    s0 = s0 + 4;                                                // 0x001c6688: addiu $s0, $s0, 4
    func_001c1d20();  // 1c1d20                                // 0x001c668c: jal 0x1c1d20
    v0 = g_0001001a;  // Global at 0x0001001a                   // 0x001c6698: lbu $v0, 0xa($s1)
    v0 = v0 & 1;                                                // 0x001c669c: andi $v0, $v0, 1
    if (v0 == 0) goto label_0x1c66d0;                           // 0x001c66a0: beqz $v0, 0x1c66d0
    /* nop */                                                   // 0x001c66a4: nop 
    s3 = s3 + 0x14;                                             // 0x001c66a8: addiu $s3, $s3, 0x14
    func_001b4ff0();  // 1b4ff0                                // 0x001c66b0: jal 0x1b4ff0
    func_001b5090();  // 1b5090                                // 0x001c66b8: jal 0x1b5090
    a0 = *(int32_t*)(s0);                                       // 0x001c66bc: lw $a0, 0($s0)
    func_001b5090();  // 1b5090                                // 0x001c66c0: jal 0x1b5090
    a0 = *(int32_t*)((s6) + 8);                                 // 0x001c66c4: lw $a0, 8($s6)
    s0 = s0 + 4;                                                // 0x001c66c8: addiu $s0, $s0, 4
    s2 = s2 + 1;                                                // 0x001c66cc: addiu $s2, $s2, 1
label_0x1c66d0:
    v0 = g_0001001a;  // Global at 0x0001001a                   // 0x001c66d0: lbu $v0, 0xa($s1)
    v0 = v0 & 8;                                                // 0x001c66d4: andi $v0, $v0, 8
    if (v0 == 0) goto label_0x1c670c;                           // 0x001c66d8: beqz $v0, 0x1c670c
    v0 = 2;                                                     // 0x001c66dc: addiu $v0, $zero, 2
    s3 = s3 + 0x14;                                             // 0x001c66e0: addiu $s3, $s3, 0x14
    func_001b4ff0();  // 1b4ff0                                // 0x001c66e8: jal 0x1b4ff0
    func_001b5090();  // 1b5090                                // 0x001c66f0: jal 0x1b5090
    a0 = *(int32_t*)(s0);                                       // 0x001c66f4: lw $a0, 0($s0)
    func_001b5090();  // 1b5090                                // 0x001c66f8: jal 0x1b5090
    a0 = *(int32_t*)((s6) + 0xc);                               // 0x001c66fc: lw $a0, 0xc($s6)
    s0 = s0 + 4;                                                // 0x001c6700: addiu $s0, $s0, 4
    s2 = s2 + 1;                                                // 0x001c6704: addiu $s2, $s2, 1
    v0 = 2;                                                     // 0x001c6708: addiu $v0, $zero, 2
label_0x1c670c:
    a1 = s3 + 0x14;                                             // 0x001c670c: addiu $a1, $s3, 0x14
    v0 = v0 - s2;                                               // 0x001c6710: subu $v0, $v0, $s2
    v0 = v0 << 2;                                               // 0x001c6718: sll $v0, $v0, 2
    func_001b4ff0();  // 1b4ff0                                // 0x001c671c: jal 0x1b4ff0
    s0 = s0 + v0;                                               // 0x001c6720: addu $s0, $s0, $v0
    func_001b5090();  // 1b5090                                // 0x001c6724: jal 0x1b5090
    a0 = *(int32_t*)(s0);                                       // 0x001c6728: lw $a0, 0($s0)
    func_001b5090();  // 1b5090                                // 0x001c672c: jal 0x1b5090
    a1 = s3 + 0x28;                                             // 0x001c6734: addiu $a1, $s3, 0x28
    func_001b4ff0();  // 1b4ff0                                // 0x001c6738: jal 0x1b4ff0
    func_001b5090();  // 1b5090                                // 0x001c6740: jal 0x1b5090
    a0 = *(int32_t*)((s0) + 4);                                 // 0x001c6744: lw $a0, 4($s0)
    func_001b5090();  // 1b5090                                // 0x001c6748: jal 0x1b5090
    a0 = s5 + 0x80;                                             // 0x001c674c: addiu $a0, $s5, 0x80
    a1 = s3 + 0x3c;                                             // 0x001c6750: addiu $a1, $s3, 0x3c
    func_001b4ff0();  // 1b4ff0                                // 0x001c6754: jal 0x1b4ff0
    func_001b5090();  // 1b5090                                // 0x001c675c: jal 0x1b5090
    a0 = *(int32_t*)((s0) + 8);                                 // 0x001c6760: lw $a0, 8($s0)
    func_001b5090();  // 1b5090                                // 0x001c6764: jal 0x1b5090
    a0 = s5 + 0x100;                                            // 0x001c6768: addiu $a0, $s5, 0x100
    a2 = g_00010010;  // Global at 0x00010010                   // 0x001c676c: lw $a2, 0($s1)
    v0 = 1 << 16;                                               // 0x001c6770: lui $v0, 1
    v0 = v0 | 0xa5e0;                                           // 0x001c6774: ori $v0, $v0, 0xa5e0
    /* divide: a2 / v0 -> hi:lo */                              // 0x001c6778: div $zero, $a2, $v0
    /* nop */                                                   // 0x001c677c: nop 
    /* nop */                                                   // 0x001c6780: nop 
    /* mflo $s2 */                                              // 0x001c6784
    at = (s2 < 0x3e8) ? 1 : 0;                                  // 0x001c6788: slti $at, $s2, 0x3e8
    if (at != 0) goto label_0x1c67a4;                           // 0x001c678c: bnez $at, 0x1c67a4
    v0 = s2 << 4;                                               // 0x001c6790: sll $v0, $s2, 4
    s1 = 0x3b;                                                  // 0x001c6794: addiu $s1, $zero, 0x3b
    s2 = 0x3e7;                                                 // 0x001c6798: addiu $s2, $zero, 0x3e7
    goto label_0x1c6800;                                        // 0x001c679c: b 0x1c6800
label_0x1c67a4:
    v1 = 0x708;                                                 // 0x001c67a4: addiu $v1, $zero, 0x708
    a1 = v0 - s2;                                               // 0x001c67a8: subu $a1, $v0, $s2
    a0 = a1 << 4;                                               // 0x001c67ac: sll $a0, $a1, 4
    v0 = 0x1e;                                                  // 0x001c67b0: addiu $v0, $zero, 0x1e
    a1 = a0 - a1;                                               // 0x001c67b4: subu $a1, $a0, $a1
    a0 = a1 << 4;                                               // 0x001c67b8: sll $a0, $a1, 4
    a0 = a0 - a1;                                               // 0x001c67bc: subu $a0, $a0, $a1
    a0 = a0 << 5;                                               // 0x001c67c0: sll $a0, $a0, 5
    a2 = a2 - a0;                                               // 0x001c67c4: subu $a2, $a2, $a0
    /* divide: a2 / v1 -> hi:lo */                              // 0x001c67c8: div $zero, $a2, $v1
    /* nop */                                                   // 0x001c67cc: nop 
    /* nop */                                                   // 0x001c67d0: nop 
    /* mflo $s1 */                                              // 0x001c67d4
    v1 = s1 << 4;                                               // 0x001c67d8: sll $v1, $s1, 4
    a0 = v1 - s1;                                               // 0x001c67dc: subu $a0, $v1, $s1
    v1 = a0 << 4;                                               // 0x001c67e0: sll $v1, $a0, 4
    v1 = v1 - a0;                                               // 0x001c67e4: subu $v1, $v1, $a0
    v1 = v1 << 3;                                               // 0x001c67e8: sll $v1, $v1, 3
    a2 = a2 - v1;                                               // 0x001c67ec: subu $a2, $a2, $v1
    /* divide: a2 / v0 -> hi:lo */                              // 0x001c67f0: div $zero, $a2, $v0
    /* nop */                                                   // 0x001c67f4: nop 
    /* nop */                                                   // 0x001c67f8: nop 
    /* mflo $s5 */                                              // 0x001c67fc
label_0x1c6800:
    a1 = s3 + 0x50;                                             // 0x001c6800: addiu $a1, $s3, 0x50
    func_001b4ff0();  // 1b4ff0                                // 0x001c6804: jal 0x1b4ff0
    func_001b5090();  // 1b5090                                // 0x001c680c: jal 0x1b5090
    a0 = *(int32_t*)((s0) + 0xc);                               // 0x001c6810: lw $a0, 0xc($s0)
    a1 = 0x24 << 16;                                            // 0x001c6814: lui $a1, 0x24
    a0 = sp + 0x80;                                             // 0x001c6824: addiu $a0, $sp, 0x80
    func_0010a4d8();  // 10a4d8                                // 0x001c6828: jal 0x10a4d8
    a1 = &str_00243840;  // "CNICON.BIN"                        // 0x001c682c: addiu $a1, $a1, 0x3840
    func_001b5090();  // 1b5090                                // 0x001c6830: jal 0x1b5090
    a0 = sp + 0x80;                                             // 0x001c6834: addiu $a0, $sp, 0x80
    /* FPU: ld.b $w1, -0x4a($zero) */                           // 0x001c683c: ld.b $w1, -0x4a($zero)
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x001c6840: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001c6844: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001c684c: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001c6850: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c6854: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c6858: jr $ra
    sp = sp + 0x90;                                             // 0x001c685c: addiu $sp, $sp, 0x90
}