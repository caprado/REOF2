void func_001ccc00() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001ccc00: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001ccc08: addu.qb $zero, $sp, $s1
    a0 = 0x32 << 16;                                            // 0x001ccc14: lui $a0, 0x32
    func_001ce6f0();  // 0x1ce6e0                                // 0x001ccc1c: jal 0x1ce6e0
    a0 = a0 + 0x3f30;                                           // 0x001ccc20: addiu $a0, $a0, 0x3f30
    v1 = s0 + 2;                                                // 0x001ccc24: addiu $v1, $s0, 2
    at = (v1 < v0) ? 1 : 0;                                     // 0x001ccc28: slt $at, $v1, $v0
    if (at != 0) goto label_0x1ccc7c;                           // 0x001ccc2c: bnez $at, 0x1ccc7c
    /* nop */                                                   // 0x001ccc30: nop 
    a0 = 5;                                                     // 0x001ccc34: addiu $a0, $zero, 5
    func_001cdfc0();  // 0x1cdf70                                // 0x001ccc3c: jal 0x1cdf70
    at = 0x32 << 16;                                            // 0x001ccc44: lui $at, 0x32
    v1 = 0x15;                                                  // 0x001ccc48: addiu $v1, $zero, 0x15
    a0 = g_00325938;  // Global at 0x00325938                   // 0x001ccc4c: lhu $a0, 0x5938($at)
    at = 0x32 << 16;                                            // 0x001ccc50: lui $at, 0x32
    g_00325930 = v1;  // Global at 0x00325930                   // 0x001ccc54: sw $v1, 0x5930($at)
    v1 = *(int32_t*)((gp) + -0x7b94);                           // 0x001ccc58: lw $v1, -0x7b94($gp)
    v1 = (a0 < v1) ? 1 : 0;                                     // 0x001ccc5c: slt $v1, $a0, $v1
    if (v1 != 0) goto label_0x1ccd38;                           // 0x001ccc60: bnez $v1, 0x1ccd38
    /* nop */                                                   // 0x001ccc64: nop 
    v1 = 0x10;                                                  // 0x001ccc68: addiu $v1, $zero, 0x10
    at = 0x32 << 16;                                            // 0x001ccc6c: lui $at, 0x32
    g_00325930 = v1;  // Global at 0x00325930                   // 0x001ccc70: sw $v1, 0x5930($at)
    goto label_0x1ccd3c;                                        // 0x001ccc74: b 0x1ccd3c
label_0x1ccc7c:
    at = 0x32 << 16;                                            // 0x001ccc7c: lui $at, 0x32
    a0 = 0x32 << 16;                                            // 0x001ccc80: lui $a0, 0x32
    v1 = g_003257d4;  // Global at 0x003257d4                   // 0x001ccc84: lbu $v1, 0x57d4($at)
    v0 = s0 & 0xfff;                                            // 0x001ccc88: andi $v0, $s0, 0xfff
    a0 = a0 + 0x3f30;                                           // 0x001ccc8c: addiu $a0, $a0, 0x3f30
    v1 = v1 << 0xc;                                             // 0x001ccc90: sll $v1, $v1, 0xc
    v0 = v1 | v0;                                               // 0x001ccc94: or $v0, $v1, $v0
    thunk_func_001cfe80();  // 0x1ce7d0                          // 0x001ccc98: jal 0x1ce7d0
    a1 = v0 & 0xffff;                                           // 0x001ccc9c: andi $a1, $v0, 0xffff
    a0 = 0x32 << 16;                                            // 0x001ccca0: lui $a0, 0x32
    thunk_func_001cfdf0();  // 0x1ce7b0                          // 0x001cccac: jal 0x1ce7b0
    a0 = a0 + 0x3f30;                                           // 0x001cccb0: addiu $a0, $a0, 0x3f30
    s0 = *(int32_t*)((gp) + -0x62d4);                           // 0x001cccb4: lw $s0, -0x62d4($gp)
    a0 = 0x32 << 16;                                            // 0x001cccb8: lui $a0, 0x32
    func_001ce6d0();  // 0x1ce6c0                                // 0x001cccbc: jal 0x1ce6c0
    a0 = a0 + 0x3f30;                                           // 0x001cccc0: addiu $a0, $a0, 0x3f30
    at = (s0 < v0) ? 1 : 0;                                     // 0x001cccc4: slt $at, $s0, $v0
    if (at == 0) goto label_0x1ccd24;                           // 0x001cccc8: beqz $at, 0x1ccd24
    /* nop */                                                   // 0x001ccccc: nop 
    at = 0x31 << 16;                                            // 0x001cccd0: lui $at, 0x31
    *(uint32_t*)((gp) + -0x62d4) = v0;                          // 0x001cccd4: sw $v0, -0x62d4($gp)
    a2 = g_003137bc;  // Global at 0x003137bc                   // 0x001cccd8: lbu $a2, 0x37bc($at)
    at = 0x31 << 16;                                            // 0x001cccdc: lui $at, 0x31
    a1 = g_003137bd;  // Global at 0x003137bd                   // 0x001ccce0: lbu $a1, 0x37bd($at)
    at = 0x31 << 16;                                            // 0x001ccce4: lui $at, 0x31
    a1 = a1 << 8;                                               // 0x001ccce8: sll $a1, $a1, 8
    a0 = g_003137ba;  // Global at 0x003137ba                   // 0x001cccec: lbu $a0, 0x37ba($at)
    a1 = a2 | a1;                                               // 0x001cccf0: or $a1, $a2, $a1
    at = 0x31 << 16;                                            // 0x001cccf4: lui $at, 0x31
    v1 = g_003137bb;  // Global at 0x003137bb                   // 0x001cccf8: lbu $v1, 0x37bb($at)
    v1 = v1 << 8;                                               // 0x001cccfc: sll $v1, $v1, 8
    at = 0x32 << 16;                                            // 0x001ccd00: lui $at, 0x32
    a0 = a0 | v1;                                               // 0x001ccd04: or $a0, $a0, $v1
    v1 = a0 << 5;                                               // 0x001ccd08: sll $v1, $a0, 5
    v1 = v1 - a0;                                               // 0x001ccd0c: subu $v1, $v1, $a0
    v1 = v1 << 2;                                               // 0x001ccd10: sll $v1, $v1, 2
    v1 = v1 + a0;                                               // 0x001ccd14: addu $v1, $v1, $a0
    v1 = v1 << 3;                                               // 0x001ccd18: sll $v1, $v1, 3
    v1 = a1 + v1;                                               // 0x001ccd1c: addu $v1, $a1, $v1
    g_00325940 = v1;  // Global at 0x00325940                   // 0x001ccd20: sw $v1, 0x5940($at)
label_0x1ccd24:
    at = 0x32 << 16;                                            // 0x001ccd24: lui $at, 0x32
    v1 = g_00325804;  // Global at 0x00325804                   // 0x001ccd28: lw $v1, 0x5804($at)
    v1 = v1 + 1;                                                // 0x001ccd2c: addiu $v1, $v1, 1
    at = 0x32 << 16;                                            // 0x001ccd30: lui $at, 0x32
    g_00325804 = v1;  // Global at 0x00325804                   // 0x001ccd34: sw $v1, 0x5804($at)
label_0x1ccd38:
label_0x1ccd3c:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001ccd3c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001ccd40: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001ccd44: jr $ra
    sp = sp + 0x30;                                             // 0x001ccd48: addiu $sp, $sp, 0x30
}