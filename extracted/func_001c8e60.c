void func_001c8e60() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001c8e60: addiu $sp, $sp, -0x20
    v1 = 1;                                                     // 0x001c8e64: addiu $v1, $zero, 1
    if (a0 == v1) goto label_0x1c8ed8;                          // 0x001c8e6c: beq $a0, $v1, 0x1c8ed8
    v0 = 2;                                                     // 0x001c8e74: addiu $v0, $zero, 2
    if (a0 == v0) goto label_0x1c8e90;                          // 0x001c8e78: beq $a0, $v0, 0x1c8e90
    v0 = 3;                                                     // 0x001c8e7c: addiu $v0, $zero, 3
    if (a0 == v0) goto label_0x1c8e90;                          // 0x001c8e80: beq $a0, $v0, 0x1c8e90
    /* nop */                                                   // 0x001c8e84: nop 
    goto label_0x1c8f28;                                        // 0x001c8e88: b 0x1c8f28
    /* nop */                                                   // 0x001c8e8c: nop 
label_0x1c8e90:
    v0 = 5;                                                     // 0x001c8e90: addiu $v0, $zero, 5
    if (a1 == v0) goto label_0x1c8ea8;                          // 0x001c8e94: beq $a1, $v0, 0x1c8ea8
    /* nop */                                                   // 0x001c8e98: nop 
    goto label_0x1c8ec0;                                        // 0x001c8e9c: b 0x1c8ec0
    /* nop */                                                   // 0x001c8ea0: nop 
    /* nop */                                                   // 0x001c8ea4: nop 
label_0x1c8ea8:
    func_001c7790();  // 1c7790                                // 0x001c8eac: jal 0x1c7790
    a1 = 1;                                                     // 0x001c8eb0: addiu $a1, $zero, 1
    goto label_0x1c8f28;                                        // 0x001c8eb8: b 0x1c8f28
label_0x1c8ec0:
    func_001c7790();  // 1c7790                                // 0x001c8ec4: jal 0x1c7790
    a1 = 4;                                                     // 0x001c8ec8: addiu $a1, $zero, 4
    goto label_0x1c8f28;                                        // 0x001c8ed0: b 0x1c8f28
label_0x1c8ed8:
    v0 = 6;                                                     // 0x001c8ed8: addiu $v0, $zero, 6
    if (a1 == v0) goto label_0x1c8ef8;                          // 0x001c8edc: beq $a1, $v0, 0x1c8ef8
    /* nop */                                                   // 0x001c8ee0: nop 
    if (a1 == v1) goto label_0x1c8ef8;                          // 0x001c8ee4: beq $a1, $v1, 0x1c8ef8
    /* nop */                                                   // 0x001c8ee8: nop 
    goto label_0x1c8f10;                                        // 0x001c8eec: b 0x1c8f10
    /* nop */                                                   // 0x001c8ef0: nop 
    /* nop */                                                   // 0x001c8ef4: nop 
label_0x1c8ef8:
    a0 = 1;                                                     // 0x001c8ef8: addiu $a0, $zero, 1
    func_001c7790();  // 1c7790                                // 0x001c8efc: jal 0x1c7790
    a1 = 5;                                                     // 0x001c8f00: addiu $a1, $zero, 5
    goto label_0x1c8f28;                                        // 0x001c8f08: b 0x1c8f28
label_0x1c8f10:
    func_001c7790();  // 1c7790                                // 0x001c8f14: jal 0x1c7790
    a1 = 2;                                                     // 0x001c8f18: addiu $a1, $zero, 2
    /* nop */                                                   // 0x001c8f24: nop 
label_0x1c8f28:
    v0 = 1;                                                     // 0x001c8f28: addiu $v0, $zero, 1
    at = 0x31 << 16;                                            // 0x001c8f2c: lui $at, 0x31
    g_00316aa8 = v0;  // Global at 0x00316aa8                   // 0x001c8f30: sb $v0, 0x6aa8($at)
    at = 0x31 << 16;                                            // 0x001c8f34: lui $at, 0x31
    func_001ca250();  // 1ca250                                // 0x001c8f38: jal 0x1ca250
    g_00316a90 = v0;  // Global at 0x00316a90                   // 0x001c8f3c: sw $v0, 0x6a90($at)
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c8f48: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c8f4c: jr $ra
    sp = sp + 0x20;                                             // 0x001c8f50: addiu $sp, $sp, 0x20
}