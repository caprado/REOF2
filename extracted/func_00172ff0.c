void func_00172ff0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4;
    
    sp = sp + -0x20;                                            // 0x00172ff0: addiu $sp, $sp, -0x20
    v1 = 4;                                                     // 0x00172ff4: addiu $v1, $zero, 4
    v0 = *(int32_t*)((s0) + 0x48);                              // 0x00173004: lw $v0, 0x48($s0)
    if (v0 != v1) goto label_0x17303c;                          // 0x00173008: bne $v0, $v1, 0x17303c
    a1 = s0 + 0x94c;                                            // 0x0017300c: addiu $a1, $s0, 0x94c
    v0 = *(int32_t*)((s0) + 0x50);                              // 0x00173010: lw $v0, 0x50($s0)
    v1 = 1;                                                     // 0x00173014: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x173070;                          // 0x00173018: beq $v0, $v1, 0x173070
    v0 = *(int32_t*)((a1) + 0x18);                              // 0x00173020: lw $v0, 0x18($a1)
    if (v0 == v1) goto label_0x17303c;                          // 0x00173024: beq $v0, $v1, 0x17303c
    func_00175f80();  // 0x175ed0                                // 0x0017302c: jal 0x175ed0
    a2 = sp + 4;                                                // 0x00173030: addiu $a2, $sp, 4
    if (v0 == 0) goto label_0x173048;                           // 0x00173034: beqz $v0, 0x173048
    v1 = local_0;                                               // 0x00173038: lw $v1, 0($sp)
label_0x17303c:
    goto label_0x173070;                                        // 0x0017303c: b 0x173070
    /* nop */                                                   // 0x00173044: nop 
label_0x173048:
    if (v1 < 0) goto label_0x173070;                            // 0x00173048: bltz $v1, 0x173070
    func_001752f8();  // 0x1752e8                                // 0x00173050: jal 0x1752e8
    a1 = 0x36;                                                  // 0x00173054: addiu $a1, $zero, 0x36
    a1 = 0x3e8;                                                 // 0x00173058: addiu $a1, $zero, 0x3e8
    a2 = local_0;                                               // 0x0017305c: lw $a2, 0($sp)
    func_001764c8();  // 0x176438                                // 0x00173064: jal 0x176438
    a3 = local_4;                                               // 0x00173068: lw $a3, 4($sp)
    v0 = ((unsigned)0 < (unsigned)v0) ? 1 : 0;                  // 0x0017306c: sltu $v0, $zero, $v0
label_0x173070:
    return;                                                     // 0x00173078: jr $ra
    sp = sp + 0x20;                                             // 0x0017307c: addiu $sp, $sp, 0x20
}