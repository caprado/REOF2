void func_0017cfb8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_10, local_14, local_4;
    
    sp = sp + -0x40;                                            // 0x0017cfb8: addiu $sp, $sp, -0x40
    s1 = t0 + 0x14;                                             // 0x0017cfc4: addiu $s1, $t0, 0x14
    *(uint32_t*)((s1) + 4) = v0;                                // 0x0017cfd8: sw $v0, 4($s1)
    a1 = 0x23 << 16;                                            // 0x0017cfdc: lui $a1, 0x23
    *(uint32_t*)((s1) + 8) = v1;                                // 0x0017cfe0: sw $v1, 8($s1)
    a2 = 0x23 << 16;                                            // 0x0017cfe4: lui $a2, 0x23
    a1 = a1 + -0x6348;                                          // 0x0017cfec: addiu $a1, $a1, -0x6348
    a2 = &str_00229cc0;  // "ZMHDR"                             // 0x0017cff0: addiu $a2, $a2, -0x6340
    s0 = *(int32_t*)((t0) + 0x24);                              // 0x0017cff4: lw $s0, 0x24($t0)
    a3 = sp + 0x10;                                             // 0x0017cff8: addiu $a3, $sp, 0x10
    local_0 = v0;                                               // 0x0017cffc: sw $v0, 0($sp)
    func_001407b0();  // 0x1406e0                                // 0x0017d000: jal 0x1406e0
    local_4 = v1;                                               // 0x0017d004: sw $v1, 4($sp)
    if (v0 != 0) goto label_0x17d028;                           // 0x0017d010: bnez $v0, 0x17d028
    func_0017d510();  // 0x17d4e8                                // 0x0017d018: jal 0x17d4e8
    /* nop */                                                   // 0x0017d01c: nop 
    goto label_0x17d038;                                        // 0x0017d020: b 0x17d038
    v0 = 1;                                                     // 0x0017d024: addiu $v0, $zero, 1
label_0x17d028:
    a1 = local_10;                                              // 0x0017d028: lw $a1, 0x10($sp)
    func_0017d510();  // 0x17d4e8                                // 0x0017d02c: jal 0x17d4e8
    a2 = local_14;                                              // 0x0017d030: lw $a2, 0x14($sp)
    v0 = 1;                                                     // 0x0017d034: addiu $v0, $zero, 1
label_0x17d038:
    *(uint32_t*)(s1) = v0;                                      // 0x0017d03c: sw $v0, 0($s1)
    return;                                                     // 0x0017d048: jr $ra
    sp = sp + 0x40;                                             // 0x0017d04c: addiu $sp, $sp, 0x40
}