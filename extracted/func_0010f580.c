void func_0010f580() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_10, local_14, local_54, local_8, local_c;
    
    sp = sp + -0x70;                                            // 0x0010f580: addiu $sp, $sp, -0x70
    v1 = 0x7fff << 16;                                          // 0x0010f584: lui $v1, 0x7fff
    v1 = v1 | 0xffff;                                           // 0x0010f590: ori $v1, $v1, 0xffff
    local_54 = a0;                                              // 0x0010f594: sw $a0, 0x54($sp)
    v0 = 0x208;                                                 // 0x0010f59c: addiu $v0, $zero, 0x208
    local_14 = v1;                                              // 0x0010f5a8: sw $v1, 0x14($sp)
    local_8 = v1;                                               // 0x0010f5ac: sw $v1, 8($sp)
    local_c = v0;                                               // 0x0010f5b0: sh $v0, 0xc($sp)
    local_10 = t0;                                              // 0x0010f5b4: sw $t0, 0x10($sp)
    func_0010ce88();  // 0x10ce10                                // 0x0010f5b8: jal 0x10ce10
    local_0 = t0;                                               // 0x0010f5bc: sw $t0, 0($sp)
    v1 = local_0;                                               // 0x0010f5c0: lw $v1, 0($sp)
    g_7fff0000 = 0;  // Global at 0x7fff0000                    // 0x0010f5c8: sb $zero, 0($v1)
    return;                                                     // 0x0010f5cc: jr $ra
    sp = sp + 0x70;                                             // 0x0010f5d0: addiu $sp, $sp, 0x70
}