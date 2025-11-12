void func_001d0fa0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_18;
    
    sp = sp + -0x20;                                            // 0x001d0fa0: addiu $sp, $sp, -0x20
    v0 = 1;                                                     // 0x001d0fa4: addiu $v0, $zero, 1
    v1 = *(int32_t*)((gp) + -0x6260);                           // 0x001d0fac: lw $v1, -0x6260($gp)
    v1 = *(int32_t*)(v1);                                       // 0x001d0fb0: lw $v1, 0($v1)
    if (v1 == v0) goto label_0x1d0fc4;                          // 0x001d0fb4: beq $v1, $v0, 0x1d0fc4
    a0 = sp + 0x1c;                                             // 0x001d0fb8: addiu $a0, $sp, 0x1c
    goto label_0x1d1044;                                        // 0x001d0fbc: b 0x1d1044
label_0x1d0fc4:
    func_001ca1e0();  // 0x1ca170                                // 0x001d0fc4: jal 0x1ca170
    /* nop */                                                   // 0x001d0fc8: nop 
    v1 = 1;                                                     // 0x001d0fcc: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x1d0ff0;                          // 0x001d0fd0: beq $v0, $v1, 0x1d0ff0
    if (v0 == 0) goto label_0x1d0fe8;                           // 0x001d0fd8: beqz $v0, 0x1d0fe8
    /* nop */                                                   // 0x001d0fdc: nop 
    goto label_0x1d1044;                                        // 0x001d0fe0: b 0x1d1044
    v0 = -1;                                                    // 0x001d0fe4: addiu $v0, $zero, -1
label_0x1d0fe8:
    goto label_0x1d1044;                                        // 0x001d0fe8: b 0x1d1044
label_0x1d0ff0:
    func_001ca220();  // 0x1ca1e0                                // 0x001d0ff0: jal 0x1ca1e0
    a1 = sp + 0x18;                                             // 0x001d0ff4: addiu $a1, $sp, 0x18
    if (v0 <= 0) goto label_0x1d1034;                           // 0x001d0ff8: blez $v0, 0x1d1034
    /* nop */                                                   // 0x001d0ffc: nop 
    func_001c8cd0();  // 0x1c8cc0                                // 0x001d1000: jal 0x1c8cc0
    /* nop */                                                   // 0x001d1004: nop 
    if (v0 != 0) goto label_0x1d1034;                           // 0x001d1008: bnez $v0, 0x1d1034
    /* nop */                                                   // 0x001d100c: nop 
    func_001ca250();  // 0x1ca220                                // 0x001d1010: jal 0x1ca220
    a0 = local_18;                                              // 0x001d1014: lw $a0, 0x18($sp)
    if (v0 != 0) goto label_0x1d1034;                           // 0x001d1018: bnez $v0, 0x1d1034
    /* nop */                                                   // 0x001d101c: nop 
    a0 = local_18;                                              // 0x001d1020: lw $a0, 0x18($sp)
    v1 = *(int32_t*)((gp) + -0x6260);                           // 0x001d1028: lw $v1, -0x6260($gp)
    goto label_0x1d1044;                                        // 0x001d102c: b 0x1d1044
    *(uint32_t*)((v1) + 0x10) = a0;                             // 0x001d1030: sw $a0, 0x10($v1)
label_0x1d1034:
    v0 = *(int32_t*)((gp) + -0x6260);                           // 0x001d1034: lw $v0, -0x6260($gp)
    v1 = -1;                                                    // 0x001d1038: addiu $v1, $zero, -1
    *(uint32_t*)((v0) + 0x10) = v1;                             // 0x001d103c: sw $v1, 0x10($v0)
    v0 = -1;                                                    // 0x001d1040: addiu $v0, $zero, -1
label_0x1d1044:
    return;                                                     // 0x001d1048: jr $ra
    sp = sp + 0x20;                                             // 0x001d104c: addiu $sp, $sp, 0x20
}