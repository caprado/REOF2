void func_00182278() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = *(int8_t*)(a0);                                        // 0x00182278: lb $v0, 0($a0)
    if (v0 == 0) return;  // Branch to 0x1822c4                 // 0x0018227c: beqz $v0, 0x1822c4
    v1 = *(uint8_t*)(a0);                                       // 0x00182280: lbu $v1, 0($a0)
    a2 = 0x3f;                                                  // 0x00182284: addiu $a2, $zero, 0x3f
    a1 = 0x2a;                                                  // 0x00182288: addiu $a1, $zero, 0x2a
    /* nop */                                                   // 0x0018228c: nop 
    v0 = v1 << 0x18;                                            // 0x00182290: sll $v0, $v1, 0x18
    v0 = v0 >> 0x18;                                            // 0x00182294: sra $v0, $v0, 0x18
    if (v0 == a2) goto label_0x1822b0;                          // 0x00182298: beq $v0, $a2, 0x1822b0
    /* nop */                                                   // 0x0018229c: nop 
    if (v0 == a1) goto label_0x1822b0;                          // 0x001822a0: beq $v0, $a1, 0x1822b0
    v0 = (v0 < 0x20) ? 1 : 0;                                   // 0x001822a4: slti $v0, $v0, 0x20
    if (v0 == 0) return;  // Branch to 0x1822b8                 // 0x001822a8: beqz $v0, 0x1822b8
    a0 = a0 + 1;                                                // 0x001822ac: addiu $a0, $a0, 1
label_0x1822b0:
    return;                                                     // 0x001822b0: jr $ra
}