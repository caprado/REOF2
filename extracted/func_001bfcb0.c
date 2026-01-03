void func_001bfcb0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x60;                                            // 0x001bfcb0: addiu $sp, $sp, -0x60
    v0 = 0x22 << 16;                                            // 0x001bfcb4: lui $v0, 0x22
    a2 = 0x31 << 16;                                            // 0x001bfcbc: lui $a2, 0x31
    at = 0x31 << 16;                                            // 0x001bfcc4: lui $at, 0x31
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001bfcc8: dpa.w.ph $ac0, $sp, $s3
    v0 = v0 + -0x30e8;                                          // 0x001bfccc: addiu $v0, $v0, -0x30e8
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001bfcd8: addu.qb $zero, $sp, $s1
    s2 = a0 + 4;                                                // 0x001bfcdc: addiu $s2, $a0, 4
    a0 = 0x31 << 16;                                            // 0x001bfce4: lui $a0, 0x31
    v1 = g_00316094;  // Global at 0x00316094                   // 0x001bfce8: lw $v1, 0x6094($at)
    a1 = 0x24 << 16;                                            // 0x001bfcec: lui $a1, 0x24
    s1 = 0x31 << 16;                                            // 0x001bfcf0: lui $s1, 0x31
    s0 = s2 << 4;                                               // 0x001bfcf4: sll $s0, $s2, 4
    a0 = a0 + 0x6032;                                           // 0x001bfcf8: addiu $a0, $a0, 0x6032
    a1 = &str_0023e180;  // "rom0:ROMVER"                       // 0x001bfcfc: addiu $a1, $a1, -0x1e80
    a2 = a2 + 0x6010;                                           // 0x001bfd00: addiu $a2, $a2, 0x6010
    v1 = v1 << 2;                                               // 0x001bfd04: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001bfd08: addu $v0, $v0, $v1
    s4 = g_0021cf18;  // Global at 0x0021cf18                   // 0x001bfd0c: lw $s4, 0($v0)
    v0 = s0 + s4;                                               // 0x001bfd10: addu $v0, $s0, $s4
    a3 = g_0021cf24;  // Global at 0x0021cf24                   // 0x001bfd14: lw $a3, 0xc($v0)
    func_0010a4d8();  // 10a4d8                                // 0x001bfd18: jal 0x10a4d8
    s1 = s1 + 0x5fc0;                                           // 0x001bfd1c: addiu $s1, $s1, 0x5fc0
    v1 = s0 + s4;                                               // 0x001bfd20: addu $v1, $s0, $s4
    at = 0x31 << 16;                                            // 0x001bfd24: lui $at, 0x31
    v1 = *(int32_t*)((v1) + 0x14);                              // 0x001bfd28: lw $v1, 0x14($v1)
    a2 = 4;                                                     // 0x001bfd2c: addiu $a2, $zero, 4
    g_0031607c = v1;  // Global at 0x0031607c                   // 0x001bfd30: sw $v1, 0x607c($at)
    at = 0x31 << 16;                                            // 0x001bfd34: lui $at, 0x31
    g_003160a4 = 0;  // Global at 0x003160a4                    // 0x001bfd38: sw $zero, 0x60a4($at)
    a1 = 1;                                                     // 0x001bfd3c: addiu $a1, $zero, 1
label_0x1bfd40:
    if (s2 == a2) goto label_0x1bfd58;                          // 0x001bfd40: beq $s2, $a2, 0x1bfd58
    /* nop */                                                   // 0x001bfd44: nop 
    v1 = g_003160a4;  // Global at 0x003160a4                   // 0x001bfd48: lw $v1, 0xe4($s1)
    a0 = a1 << a2;                                              // 0x001bfd4c: sllv $a0, $a1, $a2
    v1 = v1 | a0;                                               // 0x001bfd50: or $v1, $v1, $a0
    g_003160a4 = v1;  // Global at 0x003160a4                   // 0x001bfd54: sw $v1, 0xe4($s1)
label_0x1bfd58:
    a2 = a2 + 1;                                                // 0x001bfd58: addiu $a2, $a2, 1
    v1 = (a2 < 7) ? 1 : 0;                                      // 0x001bfd5c: slti $v1, $a2, 7
    if (v1 != 0) goto label_0x1bfd40;                           // 0x001bfd60: bnez $v1, 0x1bfd40
    /* nop */                                                   // 0x001bfd64: nop 
    if (s3 == 0) goto label_0x1bfd80;                           // 0x001bfd68: beqz $s3, 0x1bfd80
    /* nop */                                                   // 0x001bfd6c: nop 
    a2 = g_0031607c;  // Global at 0x0031607c                   // 0x001bfd70: lw $a2, 0xbc($s1)
    a0 = g_00316090;  // Global at 0x00316090                   // 0x001bfd74: lw $a0, 0xd0($s1)
    func_00107c70();  // 107c70                                // 0x001bfd78: jal 0x107c70
label_0x1bfd80:
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001bfd84: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001bfd8c: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001bfd90: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001bfd94: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001bfd98: jr $ra
    sp = sp + 0x60;                                             // 0x001bfd9c: addiu $sp, $sp, 0x60
}