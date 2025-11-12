void func_0017ab20() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_10, local_14, local_20, local_24, local_28, local_2c, local_4;
    uint32_t local_8, local_c;
    
    sp = sp + -0x50;                                            // 0x0017ab20: addiu $sp, $sp, -0x50
    t5 = v0 + 4;                                                // 0x0017ab2c: addiu $t5, $v0, 4
    t3 = v0 + 0x24;                                             // 0x0017ab30: addiu $t3, $v0, 0x24
    t2 = v0 + 0x14;                                             // 0x0017ab34: addiu $t2, $v0, 0x14
    v1 = *(int32_t*)((t5) + 4);                                 // 0x0017ab38: lw $v1, 4($t5)
    a3 = *(int32_t*)((v0) + 0x44);                              // 0x0017ab40: lw $a3, 0x44($v0)
    a2 = *(int32_t*)((t2) + 4);                                 // 0x0017ab48: lw $a2, 4($t2)
    t6 = v1 << 2;                                               // 0x0017ab4c: sll $t6, $v1, 2
    t0 = *(int32_t*)((t3) + 4);                                 // 0x0017ab50: lw $t0, 4($t3)
    t1 = *(int32_t*)((v0) + 0x48);                              // 0x0017ab54: lw $t1, 0x48($v0)
    local_10 = a2;                                              // 0x0017ab58: sw $a2, 0x10($sp)
    local_24 = a3;                                              // 0x0017ab60: sw $a3, 0x24($sp)
    local_c = v1;                                               // 0x0017ab64: sw $v1, 0xc($sp)
    local_14 = t0;                                              // 0x0017ab68: sw $t0, 0x14($sp)
    local_28 = t1;                                              // 0x0017ab6c: sw $t1, 0x28($sp)
    a3 = *(int32_t*)(t5);                                       // 0x0017ab70: lw $a3, 0($t5)
    v0 = *(int32_t*)(t2);                                       // 0x0017ab74: lw $v0, 0($t2)
    v1 = *(int32_t*)(t3);                                       // 0x0017ab78: lw $v1, 0($t3)
    t0 = *(int32_t*)((a0) + 8);                                 // 0x0017ab7c: lw $t0, 8($a0)
    local_4 = v0;                                               // 0x0017ab84: sw $v0, 4($sp)
    local_8 = v1;                                               // 0x0017ab88: sw $v1, 8($sp)
    local_0 = a3;                                               // 0x0017ab8c: sw $a3, 0($sp)
    if (t0 != 0) goto label_0x17aba0;                           // 0x0017ab90: bnez $t0, 0x17aba0
    local_20 = t4;                                              // 0x0017ab94: sw $t4, 0x20($sp)
    goto label_0x17aba4;                                        // 0x0017ab98: b 0x17aba4
    local_2c = t6;                                              // 0x0017ab9c: sw $t6, 0x2c($sp)
label_0x17aba0:
    local_2c = t0;                                              // 0x0017aba0: sw $t0, 0x2c($sp)
label_0x17aba4:
    func_00148f70();  // 0x148f60                                // 0x0017aba4: jal 0x148f60
    a3 = *(int32_t*)((t5) + 8);                                 // 0x0017aba8: lw $a3, 8($t5)
    return;                                                     // 0x0017abb0: jr $ra
    sp = sp + 0x50;                                             // 0x0017abb4: addiu $sp, $sp, 0x50
}