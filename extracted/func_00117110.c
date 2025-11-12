void func_00117110() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00117110: addiu $sp, $sp, -0x10
    a0 = 0x8000 << 16;                                          // 0x0011711c: lui $a0, 0x8000
    a0 = a0 | 8;                                                // 0x00117120: ori $a0, $a0, 8
    a2 = 0x40;                                                  // 0x00117124: addiu $a2, $zero, 0x40
    a3 = *(int32_t*)((a1) + 0x24);                              // 0x00117128: lw $a3, 0x24($a1)
    t0 = *(int32_t*)((a1) + 0x28);                              // 0x0011712c: lw $t0, 0x28($a1)
    func_00116b48();  // 0x116b08                                // 0x00117130: jal 0x116b08
    t1 = *(int32_t*)((a1) + 0x2c);                              // 0x00117134: lw $t1, 0x2c($a1)
    v1 = 0x800;                                                 // 0x00117138: addiu $v1, $zero, 0x800
    if (v0 != 0) v1 = 0;                                        // 0x00117140: movn $v1, $zero, $v0
    return;                                                     // 0x00117148: jr $ra
    sp = sp + 0x10;                                             // 0x0011714c: addiu $sp, $sp, 0x10
}