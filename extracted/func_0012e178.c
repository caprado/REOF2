void func_0012e178() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0012e178: addiu $sp, $sp, -0x10
    a1 = 7;                                                     // 0x0012e17c: addiu $a1, $zero, 7
    /* beqzl $a1, 0x12e194 */                                   // 0x0012e18c: beqzl $a1, 0x12e194
    /* break (trap) */                                          // 0x0012e190: break 0, 7
    a0 = 0x20 << 16;                                            // 0x0012e194: lui $a0, 0x20
    t0 = 1;                                                     // 0x0012e198: addiu $t0, $zero, 1
    a3 = *(int32_t*)((s0) + 0x78);                              // 0x0012e19c: lw $a3, 0x78($s0)
    v1 = g_001fed58;  // Global at 0x001fed58                   // 0x0012e1a0: lw $v1, -0x12a8($a0)
    v0 = a3 + -1;                                               // 0x0012e1a4: addiu $v0, $a3, -1
    /* divide: v0 / a1 -> hi:lo */                              // 0x0012e1ac: div $zero, $v0, $a1
    /* mflo $v0 */                                              // 0x0012e1b0
    v0 = v0 + 1;                                                // 0x0012e1b4: addiu $v0, $v0, 1
    a1 = (v0 < v1) ? 1 : 0;                                     // 0x0012e1b8: slt $a1, $v0, $v1
    if (a1 != 0) v1 = v0;                                       // 0x0012e1bc: movn $v1, $v0, $a1
    a2 = (v1 < 1) ? 1 : 0;                                      // 0x0012e1c0: slti $a2, $v1, 1
    if (a2 != 0) v1 = t0;                                       // 0x0012e1c4: movn $v1, $t0, $a2
    if (a3 != 0) goto label_0x12e1e0;                           // 0x0012e1c8: bnez $a3, 0x12e1e0
    *(uint16_t*)((s0) + 0x7c) = v1;                             // 0x0012e1cc: sh $v1, 0x7c($s0)
    at = 0x22 << 16;                                            // 0x0012e1d0: lui $at, 0x22
    goto label_0x12e1f8;                                        // 0x0012e1d4: b 0x12e1f8
    /* nop */                                                   // 0x0012e1dc: nop 
label_0x12e1e0:
    func_00111f90();  // 111f90                                // 0x0012e1e0: jal 0x111f90
    /* nop */                                                   // 0x0012e1e4: nop 
    at = 0x22 << 16;                                            // 0x0012e1e8: lui $at, 0x22
    func_00111ce0();  // 111ce0                                // 0x0012e1f0: jal 0x111ce0
label_0x12e1f8:
    return;                                                     // 0x0012e204: jr $ra
    sp = sp + 0x10;                                             // 0x0012e208: addiu $sp, $sp, 0x10
}