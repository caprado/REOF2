void func_0012dba8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_13, local_15, local_8;
    
    sp = sp + -0x40;                                            // 0x0012dba8: addiu $sp, $sp, -0x40
    local_0 = t1;                                               // 0x0012dbc0: sw $t1, 0($sp)
    t1 = sp + 0x14;                                             // 0x0012dbc4: addiu $t1, $sp, 0x14
    v0 = sp + 0x18;                                             // 0x0012dbc8: addiu $v0, $sp, 0x18
    t0 = sp + 0x13;                                             // 0x0012dbcc: addiu $t0, $sp, 0x13
    a2 = sp + 0x10;                                             // 0x0012dbd0: addiu $a2, $sp, 0x10
    a3 = sp + 0x12;                                             // 0x0012dbd4: addiu $a3, $sp, 0x12
    t2 = sp + 0x15;                                             // 0x0012dbd8: addiu $t2, $sp, 0x15
    func_00126458();  // 126458                                // 0x0012dbe0: jal 0x126458
    local_8 = v0;                                               // 0x0012dbe4: sw $v0, 8($sp)
    v1 = local_15;                                              // 0x0012dbe8: lb $v1, 0x15($sp)
    a0 = local_13;                                              // 0x0012dbec: lb $a0, 0x13($sp)
    *(uint32_t*)(s0) = v1;                                      // 0x0012dbf0: sw $v1, 0($s0)
    *(uint32_t*)(s1) = a0;                                      // 0x0012dbf8: sw $a0, 0($s1)
    return;                                                     // 0x0012dc04: jr $ra
    sp = sp + 0x40;                                             // 0x0012dc08: addiu $sp, $sp, 0x40
}