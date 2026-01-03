void func_001afc60() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001afc60: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001afc68: addu.qb $zero, $sp, $s1
    func_001afb10();  // 1afb10                                // 0x001afc6c: jal 0x1afb10
    v1 = 1;                                                     // 0x001afc74: addiu $v1, $zero, 1
    if (v0 != v1) goto label_0x1afcd8;                          // 0x001afc78: bne $v0, $v1, 0x1afcd8
    at = 0x49 << 16;                                            // 0x001afc7c: lui $at, 0x49
    goto label_0x1afcc0;                                        // 0x001afc80: b 0x1afcc0
label_0x1afc88:
    v1 = v1 + 0x47e0;                                           // 0x001afc88: addiu $v1, $v1, 0x47e0
    v1 = v1 + s1;                                               // 0x001afc8c: addu $v1, $v1, $s1
    s0 = v1 + 0x7545;                                           // 0x001afc90: addiu $s0, $v1, 0x7545
    v1 = g_00487a4a;  // Global at 0x00487a4a                   // 0x001afc94: lbu $v1, 0x7545($v1)
    if (v1 == 0) goto label_0x1afcbc;                           // 0x001afc98: beqz $v1, 0x1afcbc
    v1 = s1 << 4;                                               // 0x001afc9c: sll $v1, $s1, 4
    v0 = 0x48 << 16;                                            // 0x001afca0: lui $v0, 0x48
    v1 = v1 + s1;                                               // 0x001afca4: addu $v1, $v1, $s1
    v0 = v0 + -0x42d0;                                          // 0x001afca8: addiu $v0, $v0, -0x42d0
    v1 = v1 << 8;                                               // 0x001afcac: sll $v1, $v1, 8
    func_00543780();  // 0x543780                               // 0x001afcb0: jal 0x543780
    a0 = v0 + v1;                                               // 0x001afcb4: addu $a0, $v0, $v1
    g_00487a4a = 0;  // Global at 0x00487a4a                    // 0x001afcb8: sb $zero, 0($s0)
label_0x1afcbc:
    s1 = s1 + 1;                                                // 0x001afcbc: addiu $s1, $s1, 1
label_0x1afcc0:
    v1 = *(int32_t*)((gp) + -0x6124);                           // 0x001afcc0: lw $v1, -0x6124($gp)
    v1 = ((unsigned)s1 < (unsigned)v1) ? 1 : 0;                 // 0x001afcc4: sltu $v1, $s1, $v1
    if (v1 != 0) goto label_0x1afc88;                           // 0x001afcc8: bnez $v1, 0x1afc88
    v1 = 0x47 << 16;                                            // 0x001afccc: lui $v1, 0x47
    goto label_0x1afd28;                                        // 0x001afcd0: b 0x1afd28
label_0x1afcd8:
    v1 = 0x48 << 16;                                            // 0x001afcd8: lui $v1, 0x48
    a0 = g_004912bd;  // Global at 0x004912bd                   // 0x001afcdc: lbu $a0, 0x12bd($at)
    v1 = v1 + -0x42db;                                          // 0x001afce0: addiu $v1, $v1, -0x42db
    v1 = v1 + a0;                                               // 0x001afce4: addu $v1, $v1, $a0
    v1 = g_0047bd25;  // Global at 0x0047bd25                   // 0x001afce8: lbu $v1, 0($v1)
    if (v1 == 0) goto label_0x1afd24;                           // 0x001afcec: beqz $v1, 0x1afd24
    v1 = a0 << 4;                                               // 0x001afcf0: sll $v1, $a0, 4
    v0 = 0x48 << 16;                                            // 0x001afcf4: lui $v0, 0x48
    v1 = v1 + a0;                                               // 0x001afcf8: addu $v1, $v1, $a0
    v0 = v0 + -0x42d0;                                          // 0x001afcfc: addiu $v0, $v0, -0x42d0
    v1 = v1 << 8;                                               // 0x001afd00: sll $v1, $v1, 8
    func_00543780();  // 0x543780                               // 0x001afd04: jal 0x543780
    a0 = v0 + v1;                                               // 0x001afd08: addu $a0, $v0, $v1
    at = 0x49 << 16;                                            // 0x001afd0c: lui $at, 0x49
    v1 = 0x48 << 16;                                            // 0x001afd10: lui $v1, 0x48
    a0 = g_004912bd;  // Global at 0x004912bd                   // 0x001afd14: lbu $a0, 0x12bd($at)
    v1 = v1 + -0x42db;                                          // 0x001afd18: addiu $v1, $v1, -0x42db
    v1 = v1 + a0;                                               // 0x001afd1c: addu $v1, $v1, $a0
    g_0047bd25 = 0;  // Global at 0x0047bd25                    // 0x001afd20: sb $zero, 0($v1)
label_0x1afd24:
label_0x1afd28:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001afd28: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001afd2c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001afd30: jr $ra
    sp = sp + 0x30;                                             // 0x001afd34: addiu $sp, $sp, 0x30
}