void func_001b3190() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_70;
    
    sp = sp + -0xa0;                                            // 0x001b3190: addiu $sp, $sp, -0xa0
    v1 = 4;                                                     // 0x001b3194: addiu $v1, $zero, 4
    v0 = (v1 < 8) ? 1 : 0;                                      // 0x001b319c: slti $v0, $v1, 8
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001b31a4: addu.qb $zero, $sp, $s1
    local_70 = a3;                                              // 0x001b31b4: sw $a3, 0x70($sp)
    if (v0 != 0) goto label_0x1b31d8;                           // 0x001b31c8: bnez $v0, 0x1b31d8
    goto label_0x1b31e4;                                        // 0x001b31d0: b 0x1b31e4
label_0x1b31d8:
    v0 = 8;                                                     // 0x001b31d8: addiu $v0, $zero, 8
    v0 = v0 - v1;                                               // 0x001b31dc: subu $v0, $v0, $v1
    v1 = v0 << 3;                                               // 0x001b31e0: sll $v1, $v0, 3
label_0x1b31e4:
    a1 = local_70;                                              // 0x001b31e4: lw $a1, 0x70($sp)
    v0 = sp + 0xa0;                                             // 0x001b31e8: addiu $v0, $sp, 0xa0
    a0 = 0x2b << 16;                                            // 0x001b31ec: lui $a0, 0x2b
    a2 = v0 - v1;                                               // 0x001b31f0: subu $a2, $v0, $v1
    func_0010f528();  // 10f528                                // 0x001b31f4: jal 0x10f528
    a0 = a0 + -0x53c0;                                          // 0x001b31f8: addiu $a0, $a0, -0x53c0
    func_001b3490();  // 1b3490                                // 0x001b31fc: jal 0x1b3490
    a0 = 8;                                                     // 0x001b3204: addiu $a0, $zero, 8
    func_001b36e0();  // 1b36e0                                // 0x001b3208: jal 0x1b36e0
    a1 = 0xc;                                                   // 0x001b320c: addiu $a1, $zero, 0xc
    func_001b3460();  // 1b3460                                // 0x001b3214: jal 0x1b3460
    a0 = 0x2b << 16;                                            // 0x001b321c: lui $a0, 0x2b
    func_001b34f0();  // 1b34f0                                // 0x001b3220: jal 0x1b34f0
    a0 = a0 + -0x53c0;                                          // 0x001b3224: addiu $a0, $a0, -0x53c0
    a0 = 8;                                                     // 0x001b3228: addiu $a0, $zero, 8
    func_001b36e0();  // 1b36e0                                // 0x001b322c: jal 0x1b36e0
    func_001b3490();  // 1b3490                                // 0x001b3234: jal 0x1b3490
    a0 = -1;                                                    // 0x001b3238: addiu $a0, $zero, -1
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001b3240: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001b3244: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b3248: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b324c: jr $ra
    sp = sp + 0xa0;                                             // 0x001b3250: addiu $sp, $sp, 0xa0
}