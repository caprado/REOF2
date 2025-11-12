void func_0016ce70() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4;
    
    sp = sp + -0x30;                                            // 0x0016ce70: addiu $sp, $sp, -0x30
    func_00166d88();  // 0x166ca8                                // 0x0016ce84: jal 0x166ca8
    a1 = *(int32_t*)((a0) + 0x1b38);                            // 0x0016ce88: lw $a1, 0x1b38($a0)
    if (v0 == 0) goto label_0x16cea0;                           // 0x0016ce8c: beqz $v0, 0x16cea0
    v1 = local_0;                                               // 0x0016ce90: lw $v1, 0($sp)
    *(uint32_t*)((s0) + 4) = 0;                                 // 0x0016ce94: sw $zero, 4($s0)
    goto label_0x16ceac;                                        // 0x0016ce98: b 0x16ceac
    *(uint32_t*)(s0) = 0;                                       // 0x0016ce9c: sw $zero, 0($s0)
label_0x16cea0:
    v0 = local_4;                                               // 0x0016cea0: lw $v0, 4($sp)
    *(uint32_t*)(s0) = v1;                                      // 0x0016cea4: sw $v1, 0($s0)
    *(uint32_t*)((s0) + 4) = v0;                                // 0x0016cea8: sw $v0, 4($s0)
label_0x16ceac:
    return;                                                     // 0x0016ceb4: jr $ra
    sp = sp + 0x30;                                             // 0x0016ceb8: addiu $sp, $sp, 0x30
}