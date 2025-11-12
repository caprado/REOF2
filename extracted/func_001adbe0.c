void func_001adbe0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001adbe0: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001adbe8: addu.qb $zero, $sp, $s1
label_0x1adbf4:
    v1 = 0x2b << 16;                                            // 0x001adbf4: lui $v1, 0x2b
    a0 = s0 << 2;                                               // 0x001adbf8: sll $a0, $s0, 2
    v1 = v1 + -0x5788;                                          // 0x001adbfc: addiu $v1, $v1, -0x5788
    s1 = v1 + a0;                                               // 0x001adc00: addu $s1, $v1, $a0
    a0 = *(int32_t*)(s1);                                       // 0x001adc04: lw $a0, 0($s1)
    if (a0 == 0) goto label_0x1adc3c;                           // 0x001adc08: beqz $a0, 0x1adc3c
    v1 = s0 << 1;                                               // 0x001adc0c: sll $v1, $s0, 1
    v0 = 0x2b << 16;                                            // 0x001adc10: lui $v0, 0x2b
    v1 = v1 + s0;                                               // 0x001adc14: addu $v1, $v1, $s0
    v0 = v0 + -0x57e0;                                          // 0x001adc18: addiu $v0, $v0, -0x57e0
    v1 = v1 << 3;                                               // 0x001adc1c: sll $v1, $v1, 3
    v0 = v0 + v1;                                               // 0x001adc24: addu $v0, $v0, $v1
    g_002aa820 = 0;  // Global at 0x002aa820                    // 0x001adc28: sb $zero, 0($v0)
    func_00132c40();  // 0x132b10                                // 0x001adc2c: jal 0x132b10
    g_002aa823 = 0;  // Global at 0x002aa823                    // 0x001adc30: sb $zero, 3($v0)
    func_00131bb8();  // 0x131af8                                // 0x001adc34: jal 0x131af8
    a0 = *(int32_t*)(s1);                                       // 0x001adc38: lw $a0, 0($s1)
label_0x1adc3c:
    s0 = s0 + 1;                                                // 0x001adc3c: addiu $s0, $s0, 1
    v1 = (s0 < 3) ? 1 : 0;                                      // 0x001adc40: slti $v1, $s0, 3
    if (v1 != 0) goto label_0x1adbf4;                           // 0x001adc44: bnez $v1, 0x1adbf4
    /* nop */                                                   // 0x001adc48: nop 
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001adc50: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001adc54: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001adc58: jr $ra
    sp = sp + 0x30;                                             // 0x001adc5c: addiu $sp, $sp, 0x30
}