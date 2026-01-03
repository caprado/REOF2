void func_0016a8c8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x40;                                            // 0x0016a8c8: addiu $sp, $sp, -0x40
    func_00168c48();  // 168c48                                // 0x0016a8f0: jal 0x168c48
    if (v0 == 0) goto label_0x16a940;                           // 0x0016a904: beqz $v0, 0x16a940
    func_0016b7b0();  // 16b7b0                                // 0x0016a90c: jal 0x16b7b0
    /* nop */                                                   // 0x0016a910: nop 
    a2 = s2 + -0x12;                                            // 0x0016a914: addiu $a2, $s2, -0x12
    v0 = local_0;                                               // 0x0016a918: lw $v0, 0($sp)
    if (v0 == 0) goto label_0x16a934;                           // 0x0016a924: beqz $v0, 0x16a934
    a3 = s3 + 0x12;                                             // 0x0016a928: addiu $a3, $s3, 0x12
    func_0016a968();  // 16a968                                // 0x0016a92c: jal 0x16a968
    /* nop */                                                   // 0x0016a930: nop 
label_0x16a934:
    goto label_0x16a948;                                        // 0x0016a934: b 0x16a948
    v0 = 1;                                                     // 0x0016a938: addiu $v0, $zero, 1
    /* nop */                                                   // 0x0016a93c: nop 
label_0x16a940:
    func_0016a968();  // 16a968                                // 0x0016a940: jal 0x16a968
label_0x16a948:
    return;                                                     // 0x0016a95c: jr $ra
    sp = sp + 0x40;                                             // 0x0016a960: addiu $sp, $sp, 0x40
}