void func_00174878() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x30;                                            // 0x00174878: addiu $sp, $sp, -0x30
    if (s0 == 0) goto label_0x1748d0;                           // 0x00174894: beqz $s0, 0x1748d0
    *(uint32_t*)(s1) = 0;                                       // 0x00174898: sw $zero, 0($s1)
    func_001744f0();  // 1744f0                                // 0x0017489c: jal 0x1744f0
    /* nop */                                                   // 0x001748a0: nop 
    v0 = local_0;                                               // 0x001748a4: lw $v0, 0($sp)
    /* beqzl $v0, 0x1748d4 */                                   // 0x001748a8: beqzl $v0, 0x1748d4
    v0 = *(int32_t*)((s0) + 0xdac);                             // 0x001748b0: lw $v0, 0xdac($s0)
    if (v0 != 0) goto label_0x1748cc;                           // 0x001748b4: bnez $v0, 0x1748cc
    v0 = 1;                                                     // 0x001748b8: addiu $v0, $zero, 1
    v0 = *(int32_t*)((s0) + 0xd94);                             // 0x001748bc: lw $v0, 0xd94($s0)
    if (v0 <= 0) goto label_0x1748d4;                           // 0x001748c0: blez $v0, 0x1748d4
    v0 = 1;                                                     // 0x001748c8: addiu $v0, $zero, 1
label_0x1748cc:
    *(uint32_t*)(s1) = v0;                                      // 0x001748cc: sw $v0, 0($s1)
label_0x1748d0:
label_0x1748d4:
    return;                                                     // 0x001748dc: jr $ra
    sp = sp + 0x30;                                             // 0x001748e0: addiu $sp, $sp, 0x30
}