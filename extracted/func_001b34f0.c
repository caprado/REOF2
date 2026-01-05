void func_001b34f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_a8;
    
    sp = sp + -0xf0;                                            // 0x001b34f0: addiu $sp, $sp, -0xf0
    v1 = 1;                                                     // 0x001b34f4: addiu $v1, $zero, 1
    v0 = (v1 < 8) ? 1 : 0;                                      // 0x001b34fc: slti $v0, $v1, 8
    local_a8 = a0;                                              // 0x001b3504: sw $a0, 0xa8($sp)
    if (v0 != 0) goto label_0x1b3530;                           // 0x001b3520: bnez $v0, 0x1b3530
    goto label_0x1b353c;                                        // 0x001b3528: b 0x1b353c
label_0x1b3530:
    v0 = 8;                                                     // 0x001b3530: addiu $v0, $zero, 8
    v0 = v0 - v1;                                               // 0x001b3534: subu $v0, $v0, $v1
    v1 = v0 << 3;                                               // 0x001b3538: sll $v1, $v0, 3
label_0x1b353c:
    a1 = local_a8;                                              // 0x001b353c: lw $a1, 0xa8($sp)
    v0 = sp + 0xf0;                                             // 0x001b3540: addiu $v0, $sp, 0xf0
    s0 = sp + 0x20;                                             // 0x001b3544: addiu $s0, $sp, 0x20
    a2 = v0 - v1;                                               // 0x001b3548: subu $a2, $v0, $v1
    func_0010f528();  // 10f528                                // 0x001b354c: jal 0x10f528
    s0 = s0 + v0;                                               // 0x001b3554: addu $s0, $s0, $v0
    a0 = sp + 0x20;                                             // 0x001b3558: addiu $a0, $sp, 0x20
    func_001b3580();  // 1b3580                                // 0x001b355c: jal 0x1b3580
    *(uint8_t*)(s0) = 0;                                        // 0x001b3560: sb $zero, 0($s0)
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b3568: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b356c: jr $ra
    sp = sp + 0xf0;                                             // 0x001b3570: addiu $sp, $sp, 0xf0
}