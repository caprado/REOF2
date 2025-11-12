void func_0010f528() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_10, local_14, local_54, local_8, local_c;
    
    v0 = 0x1f << 16;                                            // 0x0010f528: lui $v0, 0x1f
    sp = sp + -0x70;                                            // 0x0010f52c: addiu $sp, $sp, -0x70
    t0 = g_001efdf0;  // Global at 0x001efdf0                   // 0x0010f530: lw $t0, -0x210($v0)
    v0 = 0x208;                                                 // 0x0010f534: addiu $v0, $zero, 0x208
    v1 = 0x7fff << 16;                                          // 0x0010f538: lui $v1, 0x7fff
    v1 = v1 | 0xffff;                                           // 0x0010f540: ori $v1, $v1, 0xffff
    local_14 = v1;                                              // 0x0010f54c: sw $v1, 0x14($sp)
    local_8 = v1;                                               // 0x0010f550: sw $v1, 8($sp)
    local_c = v0;                                               // 0x0010f554: sh $v0, 0xc($sp)
    local_10 = a3;                                              // 0x0010f558: sw $a3, 0x10($sp)
    local_54 = t0;                                              // 0x0010f55c: sw $t0, 0x54($sp)
    func_0010ce88();  // 0x10ce10                                // 0x0010f560: jal 0x10ce10
    local_0 = a3;                                               // 0x0010f564: sw $a3, 0($sp)
    v1 = local_0;                                               // 0x0010f568: lw $v1, 0($sp)
    g_7fff0000 = 0;  // Global at 0x7fff0000                    // 0x0010f570: sb $zero, 0($v1)
    return;                                                     // 0x0010f574: jr $ra
    sp = sp + 0x70;                                             // 0x0010f578: addiu $sp, $sp, 0x70
}