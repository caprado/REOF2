void func_00115430() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4, local_8, local_c;
    
    v0 = 0x25 << 16;                                            // 0x00115430: lui $v0, 0x25
    sp = sp + -0x20;                                            // 0x00115434: addiu $sp, $sp, -0x20
    v1 = 0x2000 << 16;                                          // 0x00115438: lui $v1, 0x2000
    v0 = v0 + -0x3e40;                                          // 0x0011543c: addiu $v0, $v0, -0x3e40
    a0 = a0 & 0xffff;                                           // 0x00115440: andi $a0, $a0, 0xffff
    v0 = v0 | v1;                                               // 0x00115444: or $v0, $v0, $v1
    local_4 = a1;                                               // 0x00115448: sw $a1, 4($sp)
    local_0 = a0;                                               // 0x0011544c: sw $a0, 0($sp)
    a0 = 1;                                                     // 0x00115458: addiu $a0, $zero, 1
    local_8 = a2;                                               // 0x0011545c: sw $a2, 8($sp)
    GetMemorySize();  // 0x114710                               // 0x00115460: jal 0x114710
    local_c = v0;                                               // 0x00115464: sw $v0, 0xc($sp)
    return;                                                     // 0x0011546c: jr $ra
    sp = sp + 0x20;                                             // 0x00115470: addiu $sp, $sp, 0x20
}