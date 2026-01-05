void func_001aadb0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x001aadb0: addiu $sp, $sp, -0x40
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001aadbc: addu.qb $zero, $sp, $s1
    s1 = 0x2a << 16;                                            // 0x001aadc4: lui $s1, 0x2a
    s1 = s1 + 0x1b90;                                           // 0x001aadcc: addiu $s1, $s1, 0x1b90
label_0x1aadd0:
    s0 = s2 << 2;                                               // 0x001aadd0: sll $s0, $s2, 2
    v0 = gp + -0x7d30;                                          // 0x001aadd4: addiu $v0, $gp, -0x7d30
    v0 = v0 + s0;                                               // 0x001aadd8: addu $v0, $v0, $s0
    a0 = *(int32_t*)(v0);                                       // 0x001aade0: lw $a0, 0($v0)
    func_001a92d0();  // 1a92d0                                // 0x001aade8: jal 0x1a92d0
    a3 = 1;                                                     // 0x001aadec: addiu $a3, $zero, 1
    v1 = gp + -0x7d28;                                          // 0x001aadf0: addiu $v1, $gp, -0x7d28
    a0 = -4;                                                    // 0x001aadf4: addiu $a0, $zero, -4
    v1 = v1 + s0;                                               // 0x001aadf8: addu $v1, $v1, $s0
    s2 = s2 + 1;                                                // 0x001aadfc: addiu $s2, $s2, 1
    a1 = *(int32_t*)(v1);                                       // 0x001aae00: lw $a1, 0($v1)
    a1 = a1 + 1;                                                // 0x001aae04: addiu $a1, $a1, 1
    v1 = (s2 < 2) ? 1 : 0;                                      // 0x001aae08: slti $v1, $s2, 2
    a1 = a1 << 2;                                               // 0x001aae0c: sll $a1, $a1, 2
    a1 = a1 + 0x11c;                                            // 0x001aae10: addiu $a1, $a1, 0x11c
    a0 = a1 & a0;                                               // 0x001aae14: and $a0, $a1, $a0
    if (v1 != 0) goto label_0x1aadd0;                           // 0x001aae18: bnez $v1, 0x1aadd0
    s1 = s1 + a0;                                               // 0x001aae1c: addu $s1, $s1, $a0
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001aae24: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001aae28: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001aae2c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001aae30: jr $ra
    sp = sp + 0x40;                                             // 0x001aae34: addiu $sp, $sp, 0x40
}