void func_00160078() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00160078: addiu $sp, $sp, -0x20
    func_0015fcb0();  // 0x15fc80                                // 0x00160094: jal 0x15fc80
    a0 = 0x22 << 16;                                            // 0x0016009c: lui $a0, 0x22
    a0 = &str_00227ee0;  // "E2006 mwSfdGetTime; can't get time" // 0x001600a4: addiu $a0, $a0, 0x7ee0
    if (v0 != 0) goto label_0x1600c0;                           // 0x001600a8: bnez $v0, 0x1600c0
    func_001634a8();  // 0x163410                                // 0x001600b0: jal 0x163410
    /* nop */                                                   // 0x001600b4: nop 
    goto label_0x160100;                                        // 0x001600b8: b 0x160100
    v0 = 1;                                                     // 0x001600bc: addiu $v0, $zero, 1
label_0x1600c0:
    func_00175ed0();  // 0x175e58                                // 0x001600c0: jal 0x175e58
    a0 = *(int32_t*)((s2) + 0x40);                              // 0x001600c4: lw $a0, 0x40($s2)
    if (v0 == 0) goto label_0x1600f0;                           // 0x001600c8: beqz $v0, 0x1600f0
    a0 = -0x135;                                                // 0x001600cc: addiu $a0, $zero, -0x135
    func_0015e7e0();  // 0x15e7b0                                // 0x001600d0: jal 0x15e7b0
    /* nop */                                                   // 0x001600d4: nop 
    a0 = 0x22 << 16;                                            // 0x001600d8: lui $a0, 0x22
    func_001634a8();  // 0x163410                                // 0x001600dc: jal 0x163410
    a0 = &str_00227f10;  // "E1122605 mwSfdSetOutVol: handle is invalid." // 0x001600e0: addiu $a0, $a0, 0x7f10
    *(uint32_t*)(s0) = 0;                                       // 0x001600e4: sw $zero, 0($s0)
    v0 = 1;                                                     // 0x001600e8: addiu $v0, $zero, 1
    *(uint32_t*)(s1) = v0;                                      // 0x001600ec: sw $v0, 0($s1)
label_0x1600f0:
    v0 = *(int32_t*)(s0);                                       // 0x001600f0: lw $v0, 0($s0)
    if (v0 >= 0) goto label_0x16010c;                           // 0x001600f4: bgezl $v0, 0x16010c
    v0 = 1;                                                     // 0x001600fc: addiu $v0, $zero, 1
label_0x160100:
    *(uint32_t*)(s0) = 0;                                       // 0x00160100: sw $zero, 0($s0)
    *(uint32_t*)(s1) = v0;                                      // 0x00160104: sw $v0, 0($s1)
label_0x16010c:
    return;                                                     // 0x00160118: jr $ra
    sp = sp + 0x20;                                             // 0x0016011c: addiu $sp, $sp, 0x20
}