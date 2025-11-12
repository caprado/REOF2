void func_00183180() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4, local_8, local_c;
    
    sp = sp + -0x20;                                            // 0x00183180: addiu $sp, $sp, -0x20
    t1 = 1;                                                     // 0x0018318c: addiu $t1, $zero, 1
    v0 = *(int32_t*)((v1) + 0x30);                              // 0x00183194: lw $v0, 0x30($v1)
    a2 = *(uint16_t*)((v1) + 0x28);                             // 0x00183198: lhu $a2, 0x28($v1)
    v0 = v0 << 0xa;                                             // 0x0018319c: sll $v0, $v0, 0xa
    a3 = *(uint16_t*)((v1) + 0x2c);                             // 0x001831a0: lhu $a3, 0x2c($v1)
    /* divide: v0 / a2 -> hi:lo */                              // 0x001831a4: div $zero, $v0, $a2
    local_0 = t0;                                               // 0x001831ac: sw $t0, 0($sp)
    local_4 = a3;                                               // 0x001831b0: sw $a3, 4($sp)
    /* beqzl $a2, 0x1831bc */                                   // 0x001831b4: beqzl $a2, 0x1831bc
    /* break (trap) */                                          // 0x001831b8: break 0, 7
    local_c = t1;                                               // 0x001831bc: sw $t1, 0xc($sp)
    /* mflo $v0 */                                              // 0x001831c0
    func_001878a0();  // 0x187860                                // 0x001831c4: jal 0x187860
    local_8 = v0;                                               // 0x001831c8: sw $v0, 8($sp)
    return;                                                     // 0x001831d0: jr $ra
    sp = sp + 0x20;                                             // 0x001831d4: addiu $sp, $sp, 0x20
}