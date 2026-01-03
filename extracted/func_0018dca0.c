/** @category: game/rendering @status: complete @author: caprado */
void func_0018dca0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_a8, local_ac, local_c4;
    
    sp = sp + -0x300;                                           // 0x0018dca0: addiu $sp, $sp, -0x300
    /* FPU: dps.w.ph $ac0, $sp, $s7 */                          // 0x0018dcac: dps.w.ph $ac0, $sp, $s7
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x0018dcbc: subu.qb $zero, $sp, $s5
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x0018dcc8: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x0018dcd0: addu.qb $zero, $sp, $s1
    func_0019ce60();  // 19ce60                                // 0x0018dcd4: jal 0x19ce60
    local_ac = v0;                                              // 0x0018dcdc: sw $v0, 0xac($sp)
    v0 = v0 & 0xffff;                                           // 0x0018dce4: andi $v0, $v0, 0xffff
    a1 = v0 + -1;                                               // 0x0018dce8: addiu $a1, $v0, -1
    v1 = a1 << 3;                                               // 0x0018dcec: sll $v1, $a1, 3
    v0 = 0x29 << 16;                                            // 0x0018dcf0: lui $v0, 0x29
    v1 = v1 - a1;                                               // 0x0018dcf4: subu $v1, $v1, $a1
    v0 = v0 + -0x7380;                                          // 0x0018dcf8: addiu $v0, $v0, -0x7380
    v1 = v1 << 3;                                               // 0x0018dcfc: sll $v1, $v1, 3
    func_001a4e90();  // 1a4e90                                // 0x0018dd00: jal 0x1a4e90
    s6 = v0 + v1;                                               // 0x0018dd04: addu $s6, $v0, $v1
    local_a8 = v0;                                              // 0x0018dd08: sw $v0, 0xa8($sp)
    a0 = sp + 0x100;                                            // 0x0018dd0c: addiu $a0, $sp, 0x100
    func_001a4ee0();  // 1a4ee0                                // 0x0018dd10: jal 0x1a4ee0
    if (v0 != 0) goto label_0x18dd28;                           // 0x0018dd18: bnez $v0, 0x18dd28
    /* nop */                                                   // 0x0018dd1c: nop 
    goto label_0x18dfd8;                                        // 0x0018dd20: b 0x18dfd8
label_0x18dd28:
    v0 = local_a8;                                              // 0x0018dd28: lw $v0, 0xa8($sp)
    a0 = sp + 0x100;                                            // 0x0018dd2c: addiu $a0, $sp, 0x100
    a2 = local_ac;                                              // 0x0018dd30: lw $a2, 0xac($sp)
    func_0019c870();  // 19c870                                // 0x0018dd38: jal 0x19c870
    a1 = v0 + 1;                                                // 0x0018dd3c: addiu $a1, $v0, 1
    a0 = *(int32_t*)((s6) + 8);                                 // 0x0018dd40: lw $a0, 8($s6)
    thunk_func_0018dab0();  // 18dab0                          // 0x0018dd44: jal 0x18dab0
    a1 = 2;                                                     // 0x0018dd48: addiu $a1, $zero, 2
    *(uint32_t*)((s6) + 0x24) = v0;                             // 0x0018dd4c: sw $v0, 0x24($s6)
    func_0018db00();  // 18db00                                // 0x0018dd50: jal 0x18db00
    a0 = *(int32_t*)((s6) + 0x24);                              // 0x0018dd54: lw $a0, 0x24($s6)
    s2 = *(int16_t*)((s6) + 0x1a);                              // 0x0018dd58: lh $s2, 0x1a($s6)
    s1 = *(int16_t*)((s6) + 0x1c);                              // 0x0018dd60: lh $s1, 0x1c($s6)
    goto label_0x18deec;                                        // 0x0018dd64: b 0x18deec
label_0x18dd6c:
    v0 = 4;                                                     // 0x0018dd6c: addiu $v0, $zero, 4
    v1 = v1 + s3;                                               // 0x0018dd70: addu $v1, $v1, $s3
    v1 = v1 << 3;                                               // 0x0018dd74: sll $v1, $v1, 3
    v1 = v1 + sp;                                               // 0x0018dd78: addu $v1, $v1, $sp
    v1 = *(int32_t*)((v1) + 0x114);                             // 0x0018dd7c: lw $v1, 0x114($v1)
    if (v1 == v0) goto label_0x18deac;                          // 0x0018dd80: beq $v1, $v0, 0x18deac
    /* multiply: s2 * s1 -> hi:lo */                            // 0x0018dd84: mult $ac2, $s2, $s1
    v0 = 3;                                                     // 0x0018dd88: addiu $v0, $zero, 3
    if (v1 == v0) goto label_0x18de84;                          // 0x0018dd8c: beq $v1, $v0, 0x18de84
    /* multiply: s2 * s1 -> hi:lo */                            // 0x0018dd90: mult $ac2, $s2, $s1
    v0 = 2;                                                     // 0x0018dd94: addiu $v0, $zero, 2
    if (v1 == v0) goto label_0x18de5c;                          // 0x0018dd98: beq $v1, $v0, 0x18de5c
    /* multiply: s2 * s1 -> hi:lo */                            // 0x0018dd9c: mult $ac2, $s2, $s1
    v0 = 1;                                                     // 0x0018dda0: addiu $v0, $zero, 1
    if (v1 == v0) goto label_0x18de0c;                          // 0x0018dda4: beq $v1, $v0, 0x18de0c
    /* nop */                                                   // 0x0018dda8: nop 
    if (v1 == 0) goto label_0x18ddbc;                           // 0x0018ddac: beqz $v1, 0x18ddbc
    /* multiply: s2 * s1 -> hi:lo */                            // 0x0018ddb0: mult $ac2, $s2, $s1
    goto label_0x18dee0;                                        // 0x0018ddb4: b 0x18dee0
    s2 = s2 >> 1;                                               // 0x0018ddb8: sra $s2, $s2, 1
label_0x18ddbc:
    func_001a53a0();  // 1a53a0                                // 0x0018ddc4: jal 0x1a53a0
    s0 = v0 >> 1;                                               // 0x0018ddc8: sra $s0, $v0, 1
    v1 = *(int8_t*)((s6) + 0x36);                               // 0x0018ddcc: lb $v1, 0x36($s6)
    if (v1 != 0) goto label_0x18ddf0;                           // 0x0018ddd0: bnez $v1, 0x18ddf0
    func_0018da10();  // 18da10                                // 0x0018dde0: jal 0x18da10
    goto label_0x18dedc;                                        // 0x0018dde8: b 0x18dedc
    /* nop */                                                   // 0x0018ddec: nop 
label_0x18ddf0:
    func_0019e160();  // 19e160                                // 0x0018ddfc: jal 0x19e160
    goto label_0x18dedc;                                        // 0x0018de04: b 0x18dedc
    /* nop */                                                   // 0x0018de08: nop 
label_0x18de0c:
    func_001a53a0();  // 1a53a0                                // 0x0018de14: jal 0x1a53a0
    v1 = *(int8_t*)((s6) + 0x36);                               // 0x0018de1c: lb $v1, 0x36($s6)
    if (v1 != 0) goto label_0x18de40;                           // 0x0018de20: bnez $v1, 0x18de40
    func_0018da10();  // 18da10                                // 0x0018de30: jal 0x18da10
    goto label_0x18dedc;                                        // 0x0018de38: b 0x18dedc
    /* nop */                                                   // 0x0018de3c: nop 
label_0x18de40:
    func_0019e160();  // 19e160                                // 0x0018de4c: jal 0x19e160
    t0 = 1;                                                     // 0x0018de50: addiu $t0, $zero, 1
    goto label_0x18dedc;                                        // 0x0018de54: b 0x18dedc
    /* nop */                                                   // 0x0018de58: nop 
label_0x18de5c:
    func_001a53a0();  // 1a53a0                                // 0x0018de64: jal 0x1a53a0
    s0 = v0 << 1;                                               // 0x0018de68: sll $s0, $v0, 1
    func_0018da10();  // 18da10                                // 0x0018de74: jal 0x18da10
    goto label_0x18dedc;                                        // 0x0018de7c: b 0x18dedc
    /* nop */                                                   // 0x0018de80: nop 
label_0x18de84:
    func_001a53a0();  // 1a53a0                                // 0x0018de8c: jal 0x1a53a0
    s0 = v0 << 2;                                               // 0x0018de90: sll $s0, $v0, 2
    func_0018da10();  // 18da10                                // 0x0018de9c: jal 0x18da10
    goto label_0x18dedc;                                        // 0x0018dea4: b 0x18dedc
    /* nop */                                                   // 0x0018dea8: nop 
label_0x18deac:
    func_001a53a0();  // 1a53a0                                // 0x0018deb4: jal 0x1a53a0
    s0 = v0 << 2;                                               // 0x0018deb8: sll $s0, $v0, 2
    func_0018da10();  // 18da10                                // 0x0018dec4: jal 0x18da10
    func_0018e010();  // 18e010                                // 0x0018ded4: jal 0x18e010
label_0x18dedc:
    s2 = s2 >> 1;                                               // 0x0018dedc: sra $s2, $s2, 1
label_0x18dee0:
    s1 = s1 >> 1;                                               // 0x0018dee0: sra $s1, $s1, 1
    s4 = s4 + s0;                                               // 0x0018dee4: addu $s4, $s4, $s0
    s3 = s3 + 1;                                                // 0x0018dee8: addiu $s3, $s3, 1
label_0x18deec:
    v0 = local_a8;                                              // 0x0018deec: lw $v0, 0xa8($sp)
    at = (v0 < s3) ? 1 : 0;                                     // 0x0018def0: slt $at, $v0, $s3
    if (at == 0) goto label_0x18dd6c;                           // 0x0018def4: beqz $at, 0x18dd6c
    v1 = s3 << 3;                                               // 0x0018def8: sll $v1, $s3, 3
    a0 = local_ac;                                              // 0x0018defc: lw $a0, 0xac($sp)
    func_0019ca80();  // 19ca80                                // 0x0018df00: jal 0x19ca80
    v1 = *(int32_t*)((s6) + 0x20);                              // 0x0018df08: lw $v1, 0x20($s6)
    v0 = 0x14;                                                  // 0x0018df0c: addiu $v0, $zero, 0x14
    if (v1 == v0) goto label_0x18df20;                          // 0x0018df10: beq $v1, $v0, 0x18df20
    v0 = 0x13;                                                  // 0x0018df14: addiu $v0, $zero, 0x13
    if (v1 != v0) goto label_0x18dfd0;                          // 0x0018df18: bne $v1, $v0, 0x18dfd0
    /* nop */                                                   // 0x0018df1c: nop 
label_0x18df20:
    func_0019d130();  // 19d130                                // 0x0018df20: jal 0x19d130
    /* nop */                                                   // 0x0018df24: nop 
    a0 = sp + 0xb0;                                             // 0x0018df2c: addiu $a0, $sp, 0xb0
    v0 = 0xffff << 16;                                          // 0x0018df30: lui $v0, 0xffff
    v1 = s7 & v0;                                               // 0x0018df38: and $v1, $s7, $v0
    v1 = (unsigned)v1 >> 0x10;                                  // 0x0018df3c: srl $v1, $v1, 0x10
    v0 = 0x28 << 16;                                            // 0x0018df40: lui $v0, 0x28
    a2 = v1 + -1;                                               // 0x0018df44: addiu $a2, $v1, -1
    v0 = v0 + 0x5480;                                           // 0x0018df48: addiu $v0, $v0, 0x5480
    v1 = a2 << 3;                                               // 0x0018df4c: sll $v1, $a2, 3
    v1 = v1 - a2;                                               // 0x0018df50: subu $v1, $v1, $a2
    v1 = v1 << 3;                                               // 0x0018df54: sll $v1, $v1, 3
    func_001a5180();  // 1a5180                                // 0x0018df58: jal 0x1a5180
    s0 = v0 + v1;                                               // 0x0018df5c: addu $s0, $v0, $v1
    a0 = sp + 0xb0;                                             // 0x0018df60: addiu $a0, $sp, 0xb0
    func_0019ceb0();  // 19ceb0                                // 0x0018df68: jal 0x19ceb0
    a0 = *(int32_t*)((s0) + 8);                                 // 0x0018df70: lw $a0, 8($s0)
    thunk_func_0018dab0();  // 18dab0                          // 0x0018df74: jal 0x18dab0
    a1 = 2;                                                     // 0x0018df78: addiu $a1, $zero, 2
    *(uint32_t*)((s0) + 0x24) = v0;                             // 0x0018df7c: sw $v0, 0x24($s0)
    func_0018db00();  // 18db00                                // 0x0018df80: jal 0x18db00
    a0 = *(int32_t*)((s0) + 0x24);                              // 0x0018df84: lw $a0, 0x24($s0)
    func_001a53b0();  // 1a53b0                                // 0x0018df8c: jal 0x1a53b0
    a2 = *(int32_t*)((s0) + 8);                                 // 0x0018df94: lw $a2, 8($s0)
    func_0018da10();  // 18da10                                // 0x0018df9c: jal 0x18da10
    v1 = local_c4;                                              // 0x0018dfa4: lw $v1, 0xc4($sp)
    v0 = 4;                                                     // 0x0018dfa8: addiu $v0, $zero, 4
    if (v1 != v0) goto label_0x18dfc8;                          // 0x0018dfac: bne $v1, $v0, 0x18dfc8
    a1 = *(int16_t*)((s0) + 0x1a);                              // 0x0018dfb4: lh $a1, 0x1a($s0)
    a2 = *(int16_t*)((s0) + 0x1c);                              // 0x0018dfb8: lh $a2, 0x1c($s0)
    func_0018e010();  // 18e010                                // 0x0018dfbc: jal 0x18e010
label_0x18dfc8:
    func_0019d020();  // 19d020                                // 0x0018dfc8: jal 0x19d020
label_0x18dfd0:
    v0 = local_ac;                                              // 0x0018dfd0: lw $v0, 0xac($sp)
    v0 = v0 | s7;                                               // 0x0018dfd4: or $v0, $v0, $s7
label_0x18dfd8:
    /* FPU: xori.b $w2, $w0, 0xbe */                            // 0x0018dfdc: xori.b $w2, $w0, 0xbe
    /* FPU: ld.b $w1, -0x4a($zero) */                           // 0x0018dfe4: ld.b $w1, -0x4a($zero)
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x0018dfe8: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x0018dfec: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x0018dff4: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x0018dff8: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0018dffc: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0018e000: jr $ra
    sp = sp + 0x300;                                            // 0x0018e004: addiu $sp, $sp, 0x300
}