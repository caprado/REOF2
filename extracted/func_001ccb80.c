void func_001ccb80() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001ccb80: addiu $sp, $sp, -0x20
    at = 0x32 << 16;                                            // 0x001ccb84: lui $at, 0x32
    v0 = 5;                                                     // 0x001ccb8c: addiu $v0, $zero, 5
    v1 = g_003257d6;  // Global at 0x003257d6                   // 0x001ccb94: lbu $v1, 0x57d6($at)
    if (v1 != v0) goto label_0x1ccbc0;                          // 0x001ccb98: bne $v1, $v0, 0x1ccbc0
    a0 = 0x32 << 16;                                            // 0x001ccba0: lui $a0, 0x32
    func_001ce6e0();  // 0x1ce6d0                                // 0x001ccba4: jal 0x1ce6d0
    a0 = a0 + 0x3f30;                                           // 0x001ccba8: addiu $a0, $a0, 0x3f30
    at = (v0 < 0xc9) ? 1 : 0;                                   // 0x001ccbac: slti $at, $v0, 0xc9
    if (at != 0) goto label_0x1ccbc0;                           // 0x001ccbb0: bnez $at, 0x1ccbc0
    /* nop */                                                   // 0x001ccbb4: nop 
    goto label_0x1ccbe8;                                        // 0x001ccbb8: b 0x1ccbe8
label_0x1ccbc0:
    a0 = 0x32 << 16;                                            // 0x001ccbc0: lui $a0, 0x32
    func_001ce6f0();  // 0x1ce6e0                                // 0x001ccbc4: jal 0x1ce6e0
    a0 = a0 + 0x3f30;                                           // 0x001ccbc8: addiu $a0, $a0, 0x3f30
    v1 = s0 + 2;                                                // 0x001ccbcc: addiu $v1, $s0, 2
    at = (v1 < v0) ? 1 : 0;                                     // 0x001ccbd0: slt $at, $v1, $v0
    if (at == 0) goto label_0x1ccbe4;                           // 0x001ccbd4: beqz $at, 0x1ccbe4
    /* nop */                                                   // 0x001ccbd8: nop 
    goto label_0x1ccbe8;                                        // 0x001ccbdc: b 0x1ccbe8
    v0 = 1;                                                     // 0x001ccbe0: addiu $v0, $zero, 1
label_0x1ccbe4:
label_0x1ccbe8:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001ccbec: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001ccbf0: jr $ra
    sp = sp + 0x20;                                             // 0x001ccbf4: addiu $sp, $sp, 0x20
}