void func_00174768() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00174768: addiu $sp, $sp, -0x20
    a1 = 2;                                                     // 0x00174774: addiu $a1, $zero, 2
    func_00177970();  // 0x177950                                // 0x00174788: jal 0x177950
    if (v0 == 0) goto label_0x1747c8;                           // 0x00174794: beqz $v0, 0x1747c8
    a1 = 5;                                                     // 0x00174798: addiu $a1, $zero, 5
    func_001752f8();  // 0x1752e8                                // 0x0017479c: jal 0x1752e8
    /* nop */                                                   // 0x001747a0: nop 
    v0 = 1;                                                     // 0x001747a8: addiu $v0, $zero, 1
    if (v1 != v0) goto label_0x1747cc;                          // 0x001747ac: bnel $v1, $v0, 0x1747cc
    *(uint32_t*)(s1) = 0;                                       // 0x001747b0: sw $zero, 0($s1)
    *(uint32_t*)(s1) = v1;                                      // 0x001747b4: sw $v1, 0($s1)
    v0 = *(int32_t*)(s2);                                       // 0x001747b8: lw $v0, 0($s2)
    goto label_0x1747d0;                                        // 0x001747bc: b 0x1747d0
    v0 = ((unsigned)v0 < (unsigned)1) ? 1 : 0;                  // 0x001747c0: sltiu $v0, $v0, 1
    /* nop */                                                   // 0x001747c4: nop 
label_0x1747c8:
    *(uint32_t*)(s1) = 0;                                       // 0x001747c8: sw $zero, 0($s1)
label_0x1747cc:
label_0x1747d0:
    return;                                                     // 0x001747e0: jr $ra
    sp = sp + 0x20;                                             // 0x001747e4: addiu $sp, $sp, 0x20
}