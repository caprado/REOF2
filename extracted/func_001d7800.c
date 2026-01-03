void func_001d7800() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x001d7800: addiu $sp, $sp, -0x50
    at = 0x31 << 16;                                            // 0x001d7804: lui $at, 0x31
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001d780c: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001d7818: addu.qb $zero, $sp, $s1
    v0 = g_003137b7;  // Global at 0x003137b7                   // 0x001d7824: lb $v0, 0x37b7($at)
    if (v0 == 0) goto label_0x1d7854;                           // 0x001d7828: beqz $v0, 0x1d7854
    at = 0x31 << 16;                                            // 0x001d7830: lui $at, 0x31
    a0 = g_003137ba;  // Global at 0x003137ba                   // 0x001d7834: lbu $a0, 0x37ba($at)
    at = 0x31 << 16;                                            // 0x001d7838: lui $at, 0x31
    a1 = g_003137bc;  // Global at 0x003137bc                   // 0x001d783c: lbu $a1, 0x37bc($at)
    at = 0x31 << 16;                                            // 0x001d7840: lui $at, 0x31
    func_001a9bf0();  // 1a9bf0                                // 0x001d7844: jal 0x1a9bf0
    a2 = g_003137be;  // Global at 0x003137be                   // 0x001d7848: lbu $a2, 0x37be($at)
    goto label_0x1d78e0;                                        // 0x001d784c: b 0x1d78e0
label_0x1d7854:
    v0 = *(uint8_t*)((gp) + -0x6114);                           // 0x001d7854: lbu $v0, -0x6114($gp)
    v0 = v0 << 7;                                               // 0x001d7858: sll $v0, $v0, 7
    func_001d3c20();  // 1d3c20                                // 0x001d785c: jal 0x1d3c20
    a0 = v0 + 0x1800;                                           // 0x001d7860: addiu $a0, $v0, 0x1800
    s0 = 0x47 << 16;                                            // 0x001d7864: lui $s0, 0x47
    a0 = 0x80;                                                  // 0x001d7868: addiu $a0, $zero, 0x80
    a1 = 6;                                                     // 0x001d786c: addiu $a1, $zero, 6
    func_001b2780();  // 1b2780                                // 0x001d7870: jal 0x1b2780
    s0 = s0 + 0x4840;                                           // 0x001d7874: addiu $s0, $s0, 0x4840
    a0 = s3 & 0xff;                                             // 0x001d7878: andi $a0, $s3, 0xff
    v1 = s2 & 0xff;                                             // 0x001d787c: andi $v1, $s2, 0xff
    a0 = a0 << 0x10;                                            // 0x001d7880: sll $a0, $a0, 0x10
    v1 = v1 << 8;                                               // 0x001d7884: sll $v1, $v1, 8
    a0 = a0 | v1;                                               // 0x001d7888: or $a0, $a0, $v1
    g_00475048 = v0;  // Global at 0x00475048                   // 0x001d788c: sw $v0, 0x808($s0)
    v1 = s1 & 0xff;                                             // 0x001d7890: andi $v1, $s1, 0xff
    a1 = -1;                                                    // 0x001d7894: addiu $a1, $zero, -1
    a0 = v1 | a0;                                               // 0x001d7898: or $a0, $v1, $a0
    a3 = 2;                                                     // 0x001d78a0: addiu $a3, $zero, 2
    func_001d4db0();  // 1d4db0                                // 0x001d78a4: jal 0x1d4db0
    g_00475058 = 0;  // Global at 0x00475058                    // 0x001d78a8: sw $zero, 0x818($s0)
    a0 = 0x47 << 16;                                            // 0x001d78ac: lui $a0, 0x47
    a1 = 1;                                                     // 0x001d78b4: addiu $a1, $zero, 1
    goto label_0x1d78cc;                                        // 0x001d78b8: b 0x1d78cc
    a0 = a0 + 0x47e0;                                           // 0x001d78bc: addiu $a0, $a0, 0x47e0
label_0x1d78c0:
    v1 = a0 + a2;                                               // 0x001d78c0: addu $v1, $a0, $a2
    *(uint8_t*)((v1) + 0x8a0) = a1;                             // 0x001d78c4: sb $a1, 0x8a0($v1)
    a2 = a2 + 1;                                                // 0x001d78c8: addiu $a2, $a2, 1
label_0x1d78cc:
    v1 = g_00475052;  // Global at 0x00475052                   // 0x001d78cc: lhu $v1, 0x812($s0)
    v1 = (a2 < v1) ? 1 : 0;                                     // 0x001d78d0: slt $v1, $a2, $v1
    if (v1 != 0) goto label_0x1d78c0;                           // 0x001d78d4: bnez $v1, 0x1d78c0
    /* nop */                                                   // 0x001d78d8: nop 
label_0x1d78e0:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001d78e4: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001d78e8: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d78ec: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d78f0: jr $ra
    sp = sp + 0x50;                                             // 0x001d78f4: addiu $sp, $sp, 0x50
}